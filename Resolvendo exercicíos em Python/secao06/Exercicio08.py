n1 = int(input("Digite um número: "))

if n1 % 2 == 0:
    if n1 > 0:
        print(f"O Número {n1} PAR e positivo")
    else:
        print(f"O Número {n1} PAR e negativo")
else:
    if n1 > 0:
        print(f"O Número {n1} ÍNPAR e positivo")
    else:
        print(f"O Número {n1} ÍNPAR e negativo")
