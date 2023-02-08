e = 0
m = 0
peso = int(input("Digite o peso: "))

if peso >= 50:
    e = peso - 50
    m = e * 4.00

print(f"Peso: {peso}")
print(f"Exesso: {e}")
print(f"Multa: R$:{m:.2f}")