def non_liner_equation(x):
    return x**3 + 3*x**2 + 5*x + 7

def absolute_relative_approximation_error(x_present,x_previous):
    return ((x_present-x_previous)/x_present)*100

def secant_methos(non_liner_equation,absolute_relative_approximation_error,initial_guess_0,initial_guess_1,error_tol):
    for i in range(10):
        x = initial_guess_1 - (non_liner_equation(initial_guess_1)*(initial_guess_1-initial_guess_0))/(non_liner_equation(initial_guess_1) - non_liner_equation(initial_guess_0))
        error = (x,initial_guess_1)
        if error<error_tol:
            print("root found")
            return x;

        initial_guess_0,initial_guess_1=initial_guess_1,x

    return x
initial_guess_0 = .5
initial_guess_1 = 1
error_tol = 1e-6

root = secant_methos(non_liner_equation,absolute_relative_approximation_error,initial_guess_0,initial_guess_1,error_tol)