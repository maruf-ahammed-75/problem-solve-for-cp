# ---------- INPUT PART ----------
n = int(input("Enter number of productions: "))

grammar = {}           # dictionary to store grammar , ["TE'","ε"]
non_terminals = set()  # non-terminals NOT DUPLICATE
start_symbol = ''      # first non-terminal is start

print("Enter productions (Ex: E=TE'):")

for i in range(n):
    s = input().strip()      # example: E=TE'|ε
    left = s[0]              # left side symbol
    right = s[2:]            # skip '='
    if i == 0:
        start_symbol = left  # first production = start symbol
    non_terminals.add(left)
    grammar[left] = right.split('|')  # split multiple rules with '|'


# ---------- FIRST SET ----------
first = {}
for nt in non_terminals:
    first[nt] = set()  # FIRST(F) = { ( , i }

def find_first(symbol):
    # if symbol is a terminal (lowercase or special)
    if not symbol.isupper():
        return {symbol}

    # if already computed
    if first[symbol]:
        return first[symbol]

    result = set()
    for rule in grammar[symbol]:
        for ch in rule:
            temp = find_first(ch)
            result |= (temp - {'ε'})  # add everything except ε
            if 'ε' not in temp:       # stop if no ε
                break
        else:
            result.add('ε')  # if all have ε
    first[symbol] = result
    return result


for nt in non_terminals:
    find_first(nt)


# ---------- FOLLOW SET ----------
follow = {}                     # start with an empty dictionary
for nt in non_terminals:        # go each non-terminal
    follow[nt] = set()          # empty set
follow[start_symbol].add('$')  # start symbol has '$'

def first_of_string(s):
    """ Helper: FIRST of a string like 'E' or 'id' """
    result = set()
    for ch in s:
        temp = find_first(ch)
        result |= (temp - {'ε'})
        if 'ε' not in temp:
            break
    else:
        result.add('ε')
    return result


changed = True
while changed:
    changed = False
    for A in grammar:
        for rule in grammar[A]:
            for i, B in enumerate(rule):
                if B.isupper():
                    # case 1: A → αBβ
                    beta = rule[i + 1:]
                    first_beta = first_of_string(beta)
                    before = len(follow[B])
                    follow[B] |= (first_beta - {'ε'})

                    # case 2: if β is empty or ε in FIRST(β)
                    if not beta or 'ε' in first_beta:
                        follow[B] |= follow[A]
                    if len(follow[B]) > before:
                        changed = True


# ---------- OUTPUT ----------
print("\nFIRST sets:")
for nt in non_terminals:
    print("FIRST(", nt, ") = ", first[nt])

print("\nFOLLOW sets:")
for nt in non_terminals:
    print("FOLLOW(", nt, ") = ", follow[nt])
