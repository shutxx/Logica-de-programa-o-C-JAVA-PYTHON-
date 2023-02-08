vetor = []
maiores_50 = False

for i in range(0, 10):
    num = int(input(f"informe {i + 1} vaor para o vetor: "))
    vetor.append(num)
for n in vetor:
    if n > 50:
        print(f"O número {n} está na posição {vetor.index(n)} do vetor")
        maiores_50 = True
if maiores_50 == False:
    print("Não existe nenhum número maior que 50")
