vetor = []
codigo = int(input("Informe o código: "))

if codigo != 0:
    for i in range(0, 5):
        num = float(input("Informe um vallor real: "))
        vetor.append(num)
    if codigo == 1:
        for n in vetor:
            print(n)
    elif codigo == 2:
        vetor.reverse()
        for n in vetor:
            print(n)