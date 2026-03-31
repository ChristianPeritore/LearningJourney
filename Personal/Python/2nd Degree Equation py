import math
print("--- Quadratic Equation Solver (ax² + bx + c = 0) ---")
a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))
delta = pow(b, 2) - 4 * a * c
print(f"Δ = {delta}")
if delta > 0:
    print("Delta is greater than 0: there are 2 real and distinct solutions.")
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    print(f"x1 = {x1}, x2 = {x2}")
    check1 = a * pow(x1, 2) + b * x1 + c
    check2 = a * pow(x2, 2) + b * x2 + c
    if math.isclose(check1, 0, abs_tol=1e-9) and math.isclose(check2, 0, abs_tol=1e-9):
        print("The equation is verified and correct.")
elif delta == 0:
    print("Delta is equal to 0: there are 2 real and coincident solutions.")
    x = -b / (2 * a)
    print(f"x = {x}")
    if math.isclose(a * pow(x, 2) + b * x + c, 0, abs_tol=1e-9):
        print("The equation is verified and correct.")
else:
    print("Delta is less than 0: the solutions are complex/imaginary.")
