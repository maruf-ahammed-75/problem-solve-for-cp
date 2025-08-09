import re
from collections import defaultdict

KEYWORDS = {
    'auto', 'break', 'case', 'char', 'const', 'continue', 'default', 'do', 'double',
    'else', 'enum', 'extern', 'float', 'for', 'goto', 'if', 'int', 'long', 'register',
    'return', 'short', 'signed', 'sizeof', 'static', 'struct', 'switch', 'typedef',
    'union', 'unsigned', 'void', 'volatile', 'while'
}

ARITHMETIC_OPS = {'+', '-', '*', '/', '%', '++', '--', '='}
LOGICAL_OPS = {'==', '!=', '<', '<=', '>', '>=', '&&', '||', '!'}
PUNCTUATION = {',', ';', ':'}
PARENTHESES = {'(', ')', '{', '}', '[', ']'}

def remove_comments(code):
    code = re.sub(r'/\*.*?\*/', '', code, flags=re.DOTALL)
    code = re.sub(r'//.*', '', code)
    return code

def tokenize(code):
    token_specification = [
        ('KEYWORD',      r'\b(?:' + '|'.join(KEYWORDS) + r')\b'),
        ('IDENTIFIER',   r'\b[a-zA-Z_]\w*\b'),
        ('CONSTANT',     r'\b\d+(\.\d+)?\b'),
        ('ARITH_OP',     r'\+\+|--|==|!=|<=|>=|&&|\|\||[+\-*/%=]'),
        ('LOGICAL_OP',   r'==|!=|<=|>=|&&|\|\||[<>!&|]'),
        ('PUNCTUATION',  r'[,:;]'),
        ('PARENTHESIS',  r'[()\[\]{}]'),
        ('NEWLINE',      r'\n'),
        ('SKIP',         r'[ \t]+'),
        ('MISMATCH',     r'.'),
    ]
    tok_regex = '|'.join('(?P<%s>%s)' % pair for pair in token_specification)
    get_token = re.compile(tok_regex)
    tokens = []
    for mo in get_token.finditer(code):
        kind = mo.lastgroup
        value = mo.group()
        if kind == 'SKIP' or kind == 'NEWLINE':
            continue
        elif kind == 'MISMATCH':
            continue
        else:
            tokens.append((kind, value))
    return tokens

def categorize_and_count(tokens):
    categories = defaultdict(set)
    arith_ops_set = {'+', '-', '*', '/', '%', '++', '--', '='}
    logical_ops_set = {'==', '!=', '<', '<=', '>', '>=', '&&', '||', '!'}
    for kind, value in tokens:
        if kind == 'ARITH_OP':
            if value in arith_ops_set:
                categories['Arithmetic Operator'].add(value)
            elif value in logical_ops_set:
                categories['Logical Operator'].add(value)
            else:
                categories['Logical Operator'].add(value)
        elif kind == 'LOGICAL_OP':
            if value in logical_ops_set:
                categories['Logical Operator'].add(value)
            else:
                categories['Arithmetic Operator'].add(value)
        elif kind == 'KEYWORD':
            categories['Keyword'].add(value)
        elif kind == 'IDENTIFIER':
            categories['Identifier'].add(value)
        elif kind == 'CONSTANT':
            categories['Constant'].add(value)
        elif kind == 'PUNCTUATION':
            categories['Punctuation'].add(value)
        elif kind == 'PARENTHESIS':
            categories['Parenthesis'].add(value)
    return categories

def print_categories(categories):
    for category in ['Keyword', 'Identifier', 'Constant', 'Arithmetic Operator',
                     'Logical Operator', 'Punctuation', 'Parenthesis']:
        items = sorted(categories.get(category, []))
        if items:
            print(f"{category} ({len(items)}): {', '.join(items)}")

def print_clean_c_file_with_lexemes(input_file):
    with open(input_file, 'r') as file:
        code = file.read()
    cleaned_code = remove_comments(code)
    print("Cleaned Code:\n")
    print(cleaned_code)
    print("\nLexemes and Counts:\n")
    tokens = tokenize(cleaned_code)
    categories = categorize_and_count(tokens)
    print_categories(categories)

print_clean_c_file_with_lexemes('./Maruf.c')
