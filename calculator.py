import math

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y != 0:
        return x / y
    else:
        return "Error: Cannot divide by zero"

def square_root(x):
    return math.sqrt(x)

def exponentiate(x, y):
    return x ** y

def sine(x):
    return math.sin(math.radians(x))

def cosine(x):
    return math.cos(math.radians(x))

def tangent(x):
    return math.tan(math.radians(x))

def calculator():
    print("Advanced Calculator Menu:")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Square Root")
    print("6. Exponentiation")
    print("7. Sine")
    print("8. Cosine")
    print("9. Tangent")
    print("0. Exit")

    choice = input("Enter choice (0-9): ")

    if choice in ['1', '2', '3', '4', '6']:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
    elif choice in ['5']:
        num1 = float(input("Enter a number: "))
    elif choice in ['7', '8', '9']:
        num1 = float(input("Enter an angle in degrees: "))

    if choice == '1':
        print(f"Result: {add(num1, num2)}")
    elif choice == '2':
        print(f"Result: {subtract(num1, num2)}")
    elif choice == '3':
        print(f"Result: {multiply(num1, num2)}")
    elif choice == '4':
        print(f"Result: {divide(num1, num2)}")
    elif choice == '5':
        print(f"Result: {square_root(num1)}")
    elif choice == '6':
        power = float(input("Enter the exponent: "))
        print(f"Result: {exponentiate(num1, power)}")
    elif choice == '7':
        print(f"Sine: {sine(num1)}")
    elif choice == '8':
        print(f"Cosine: {cosine(num1)}")
    elif choice == '9':
        print(f"Tangent: {tangent(num1)}")
    elif choice == '0':
        print("Exiting the calculator.")
        return
    else:
        print("Invalid input. Please enter a number between 0 and 9.")

    calculator()

# Run the calculator
calculator()
