#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int metros, centimetros;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe o valor em metros: ");
	scanf("%d", &metros);

	//Processamentos
	centimetros = (metros * 100);

	//Saída
	printf("%d metros em centímetros é %d", metros, centimetros);
}
