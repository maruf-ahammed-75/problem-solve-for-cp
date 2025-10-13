
temp_count = 1   # to name temporary variables (T1, T2, T3 ...)

def new_temp():
    """Generate new temporary variable name like T1, T2, ..."""
    global temp_count
    name = f"T{temp_count}"
    temp_count += 1
    return name

def generate_TAC(expr):
    """Generate three address code for a given arithmetic expression."""
    expr = expr.replace(" ", "")   # remove spaces
    
    # Base case: if the expression is just a single variable or number
    if expr.isalnum():
        return expr, []
    
    # Handle parentheses first
    if "(" in expr:
        start = expr.rfind("(")  # innermost '('
        end = expr.find(")", start)
        inside = expr[start+1:end]
        
        result, code = generate_TAC(inside)
        temp = new_temp()
        code.append(f"{temp} = {result}")
        new_expr = expr[:start] + temp + expr[end+1:]
        final_result, more_code = generate_TAC(new_expr)
        return final_result, code + more_code
    
    # Handle operators by precedence (*, / before +, -)
    for op in ["*", "/", "+", "-"]:
        # find operator position (left to right)
        pos = expr.find(op)
        if pos != -1:
            left = expr[:pos]
            right = expr[pos+1:]
            
            lres, lcode = generate_TAC(left)
            rres, rcode = generate_TAC(right)
            
            temp = new_temp()
            code = lcode + rcode
            code.append(f"{temp} = {lres} {op} {rres}")
            return temp, code
    
    return expr, []

# --------------------------
# Example run
# --------------------------
expression = "-(a*b) + (c+d) - (a+b+c+d)"
result, tac_code = generate_TAC(expression)

print("Three Address Code:")
for i, line in enumerate(tac_code, 1):
    print(f"({i}) {line}")
