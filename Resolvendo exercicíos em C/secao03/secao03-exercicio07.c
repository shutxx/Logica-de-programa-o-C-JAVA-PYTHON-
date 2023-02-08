#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	float altura, peso_ideal;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Qual sua altura: ");
	scanf("%f", &altura);

	//Processamentos
	peso_ideal = (72.7 * altura) - 58;

	//Saída
	printf("Seu peso ideal seria %.2f", peso_ideal);
}
