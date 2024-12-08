def non_liner_equation(x):
    return x**3 + 3*x**2 + 5*x + 7

def derivative_non_liner_equation(x):
    return 3*x**2 + 6*x + 5

def absolute_relative_approximation_error(x_present, x_previous):
    return abs((x_present - x_previous) / x_present) * 100

def Newton_rap(non_liner_equation, derivative_non_liner_equation, absolute_relative_approximation_error, initial_guess, error_tol):
    for i in range(10):  # Maximum iterations
        # Compute next value using Newton-Raphson formula
        x = initial_guess - non_liner_equation(initial_guess) / derivative_non_liner_equation(initial_guess)

        # Compute absolute relative approximation error
        abs_error = absolute_relative_approximation_error(x, initial_guess)

        print(f"Iteration {i+1}: x = {x}, Error = {abs_error}%")

        # Check if error is within the tolerance
        if abs_error < error_tol:
            print("Converged to root:", x)
            return x

        # Update guess for the next iteration
        initial_guess = x

    print("Did not converge within the maximum iterations.")
    return x

# Parameters
initial_guess = 1
error_tol = 1e-6

# Call the function
root = Newton_rap(non_liner_equation, derivative_non_liner_equation, absolute_relative_approximation_error, initial_guess, error_tol)

print("Root =", root)
