num1 = int(input("Digite o número 1: "))
num2 = int(input("Digite o número 2: "))
num3 = int(input("Digite o número 3: "))
num4 = int(input("Digite o número 4: "))

q1 = num1 * num1
q2 = num2 * num2
q3 = num3 * num3
q4 = num4 * num4

if q3 >= 1000:
    print(q3)
else:
    print(f"Num1 {num1}, {q1}")
    print(f"Num2 {num2}, {q2}")
    print(f"Num3 {num3}, {q3}")
    print(f"Num4 {num4}, {q4}")