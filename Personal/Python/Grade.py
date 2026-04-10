subject = input("Enter the name of the subject:\n")
grade = float(input("Enter a grade from 1 to 10:\n"))
match grade:
    case g if 1 <= g < 6:
        print(f"Insufficient, study more for {subject}")
    case 6 | 6.5:
        print("Sufficient")
    case 7 | 7.5:
        print("Fair")
    case 8 | 8.5:
        print("Good")
    case 9 | 9.5 | 10:
        print("Excellent!")
    case _:
        print("Invalid number!")
        exit()
exit()
