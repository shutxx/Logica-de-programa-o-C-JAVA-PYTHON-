#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int c;
	float n, e = 0, salario, valor_hora = 10.00;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe o código; ");
	scanf("%d", &c);
	printf("Informe a quantidade de horas trabalhadas; ");
	scanf("%f", &n);

	//Processamentos
	if(n > 50){
		e = (n - 50) * 20.00;
		salario = (50 * valor_hora) + e;
		//Saída
		printf("Salário total R$:%.2f\n", salario);
		printf("Salário excedente R$:%.2f", e);
	}else{
		salario = n * valor_hora;
		//Saída
		printf("Salário total R$:%.2f\n", salario);
		printf("Salário excedente R$:%.2f", e);
	}
}
