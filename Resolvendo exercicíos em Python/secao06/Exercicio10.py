idade = int(input("Digite a idade do atleta: "))

if idade >= 5 and idade <= 7:
    print("Infantil A")
elif idade >= 8 and idade <= 11:
    print("Infantil B")
elif idade >= 12 and idade <= 13:
    print("Juvenil A")
elif idade >= 14 and idade <= 17:
    print("Juvenil B")
elif idade >= 18:
    print("Adulto")
else:
    print("Idade nao compativel ou errada!")