#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	float valor_por_hora, salario;
	int horas_trabalhadas;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Qual valor você ganha por hora? ");
	scanf("%f", &valor_por_hora);

	printf("Quantas horas cocê trabalhou neste mês? ");
	scanf("%d", &horas_trabalhadas);

	//Processamentos
	salario = (horas_trabalhadas * valor_por_hora);

	//Saída
	printf("Neste mês você vai receber R$:%.2f", salario);
}
