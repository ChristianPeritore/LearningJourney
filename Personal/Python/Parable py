import math
print("--- Parabola Analyzer (y = ax² + bx + c) ---")
a = float(input("Enter coefficient a: "))
if a == 0:
    print("Error: 'a' cannot be 0. This would be a linear equation (a line), not a parabola.")
    exit()
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))
delta = b**2 - 4*a*c
axis_of_symmetry = -b / (2 * a)
vertex_x = axis_of_symmetry
vertex_y = -delta / (4 * a)
focus_x = axis_of_symmetry
focus_y = (1 - delta) / (4 * a)
directrix = (-1 - delta) / (4 * a)
print(f"\n--- Results ---")
print(f"Delta: {delta}")
print(f"Axis of Symmetry: x = {axis_of_symmetry}")
print(f"Vertex: V({vertex_x}, {vertex_y})")
print(f"Focus: F({focus_x}, {focus_y})")
print(f"Directrix: y = {directrix}")
