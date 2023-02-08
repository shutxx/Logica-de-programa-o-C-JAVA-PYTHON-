cont_total = 0
cont_sit_1 = 0
cont_sit_2 = 0
cont_sit_3 = 0
cont_sit_4 = 0

identificador = int(input("Informe a identificação: "))

while identificador != 0:
    print("1 - Necessita de esfera.")
    print("2 - Necessita de limpeza.")
    print("3 - Necessita de troca do cabo pu conector.")
    print("4 - Quebrado ou inutilizado.")
    print("0 - Sair")

    defeito = int(input("Informe o tipo e defeito: "))

    if defeito == 1:
        cont_sit_1 = cont_sit_1 + 1
    elif defeito == 2:
        cont_sit_2 = cont_sit_2 + 1
    elif defeito == 3:
        cont_sit_3 = cont_sit_3 + 1
    elif defeito == 4:
        cont_sit_4 = cont_sit_4 + 1
    cont_total = cont_total + 1
    identificador = int(input("Informe a identificação: "))

p1 = cont_sit_1 / cont_total * 100.0
p2 = cont_sit_2 / cont_total * 100.0
p3 = cont_sit_3 / cont_total * 100.0
p4 = cont_sit_4 / cont_total * 100.0

print(f"Quantidade de mouses: {cont_total}")
print("Situação                                         Quantidade     Precentual")
print(f"1 - Necessita de esfera                         {cont_sit_1}   {p1}")
print(f"2 - Necessita de limpeza                        {cont_sit_2}   {p2}")
print(f"3 - Necessita de troca do cabo pu conector      {cont_sit_3}   {p3}")
print(f"4 - Quebrado ou inutilizado                     {cont_sit_4}   {p4}")
