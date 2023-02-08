poluicao = float(input("Digite o indice: "))

if poluicao >= 0.3 and poluicao < 0.4:
    print("Grupo 1 suspender atividades!!")
elif poluicao >= 0.4 and poluicao < 0.5:
    print("Grupo 2 suspender atividades!!")
elif poluicao >= 0.5:
    print("Todos os grupos devem suspender atividdaddes")
else:
    print("Tudo certo")
