maior = 0
n = int(input("Informne um número: "))
while n != 0:
    if n > maior:
        maior = n
    n = int(input("Informne um número: "))
print(f"O maior número é {maior}")