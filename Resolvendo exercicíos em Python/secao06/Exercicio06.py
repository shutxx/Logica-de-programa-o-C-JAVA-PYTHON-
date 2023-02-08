valor_hora = 10
valor_horas_exceddente = 20.00
e = 0

c = int(input("Informe o código: "))
n = float(input("Informe a quantidade de horas trabalhadas: "))

if n > 50:
    e = (n - 50) * valor_horas_exceddente
    salario = (50 * valor_hora) + e

else:
    salario = (n * valor_hora)

print(f"Salário Total R$: {salario:.02f}")
print(f"Salário excedente R$: {e}")