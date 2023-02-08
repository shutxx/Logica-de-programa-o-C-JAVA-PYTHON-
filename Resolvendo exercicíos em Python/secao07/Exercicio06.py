num = int(input("Informe um número entre 1 e 10: "))

while num < 1 or num > 10:
    num = int(input("Informe um número entre 1 e 10: "))
print(f"Tabuada do {num}")
for i in range(1, 11):
    print(f"{num} x {i} = {num * i}")