valor_por_hora = float(input("Qual valor você ganha por hora: "))
horas_trabalhadas = int(input("Quantas horas você trabalhou: "))

salario = horas_trabalhadas * valor_por_hora

print(f"Neste mês você vai receber R${salario:,.2f}")