vetor = []
soma = 0

for i in range(0, 20):
    num = int(input(f"informe {i + 1}/20 valor para o vetor: "))
    vetor.append(num)
    soma = soma + num
print(f"A soma do vetor é {soma}")