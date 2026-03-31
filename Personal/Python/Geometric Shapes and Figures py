import math
print("--- Geometry Master Calculator ---")
print("Select a shape (1-15):")
choice = int(
    input(
        "1.Circle 2.Square 3.Rectangle 4.Triangle 5.Rhombus 6.Rhomboid 7.Trapezoid 8.Regular Polygon\n"
        "9.Cube 10.Parallelepiped 11.Sphere 12.Cylinder 13.Cone 14.Pyramid 15.Regular Tetrahedron\n"
    )
)
match choice:
    case 1:
        print("\n--- Circle ---")
        r = float(input("Enter the radius: "))
        theta = float(input("Enter the central angle of the sector (1-360): "))
        area = math.pi * pow(r, 2)
        perimeter = 2 * math.pi * r
        sector_area = (theta / 360) * math.pi * pow(r, 2)
        print(
            f"Circle Area: {area:.2f}\nCircumference: {perimeter:.2f}\nSector Area: {sector_area:.2f}"
        )
    case 2:
        print("\n--- Square ---")
        l = float(input("Enter the side length: "))
        area = pow(l, 2)
        perimeter = 4 * l
        diagonal = l * math.sqrt(2)
        print(f"Area: {area}\nPerimeter: {perimeter}\nDiagonal: {diagonal:.2f}")
    case 3:
        print("\n--- Rectangle ---")
        b = float(input("Enter the base: "))
        h = float(input("Enter the height: "))
        area = b * h
        perimeter = 2 * (b + h)
        diagonal = math.sqrt(pow(b, 2) + pow(h, 2))
        print(f"Area: {area}\nPerimeter: {perimeter}\nDiagonal: {diagonal:.2f}")
    case 4:
        print("\n--- Triangle ---")
        ba = float(input("Enter the base: "))
        h = float(input("Enter the height: "))
        a = float(input("Enter side 'a': "))
        b = float(input("Enter side 'b': "))
        c = float(input("Enter side 'c': "))
        area = (ba * h) / 2
        perimeter = a + b + c
        print(f"Area: {area}\nPerimeter: {perimeter}")
    case 5:
        print("\n--- Rhombus ---")
        d1 = float(input("Enter major diagonal (d1): "))
        d2 = float(input("Enter minor diagonal (d2): "))
        side = float(input("Enter the side length: "))
        area = (d1 * d2) / 2
        perimeter = 4 * side
        print(f"Area: {area}\nPerimeter: {perimeter}")
    case 8:
        print("\n--- Regular Polygon ---")
        n = int(input("Enter the number of sides: "))
        l = float(input("Enter the side length: "))
        a = float(input("Enter the apothem: "))
        area = (n * l * a) / 2
        perimeter = n * l
        print(f"Area: {area}\nPerimeter: {perimeter}")
    case 11:
        print("\n--- Sphere ---")
        r = float(input("Enter the radius: "))
        area = 4 * math.pi * pow(r, 2)
        volume = (4 / 3) * math.pi * pow(r, 3)
        print(f"Surface Area: {area:.2f}\nVolume: {volume:.2f}")
    case 12:
        print("\n--- Cylinder ---")
        r = float(input("Enter the radius: "))
        h = float(input("Enter the height: "))
        lateral_area = 2 * math.pi * r * h
        total_area = lateral_area + 2 * math.pi * pow(r, 2)
        volume = math.pi * pow(r, 2) * h
        print(
            f"Lateral Area: {lateral_area:.2f}\nTotal Area: {total_area:.2f}\nVolume: {volume:.2f}"
        )
    case _:
        print("Invalid selection!")
