print("Hello, nice to meet you!")
name = input("What is your name?\n")
try:
    birth_year = int(input(f"Okay {name}, enter your birth year:\n"))
except ValueError:
    print("Error: Please enter a valid number.")
    exit()
if birth_year < 1900 or birth_year >= 2026:
    print("Invalid year. Access denied.")
    exit()
age = 2026 - birth_year
year_at_100 = birth_year + 100
print(f"{name}, you are {age} years old.")
print(f"You will turn 100 years old in the year {year_at_100}.")
