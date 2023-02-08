altura = float(input("Digite sua altura: "))
sexo = input("Digite o sexo F/M: ").lower()

if sexo == 'm':
    peso_ideal = (72.7 * altura) - 58

elif sexo == 'f':
    peso_ideal = (72.7 * altura) - 44.7

else:
    peso_ideal = 0
    print("Sexo nao reconhecido!")

print(f"Seu peso ideal é {peso_ideal:.2f}")

