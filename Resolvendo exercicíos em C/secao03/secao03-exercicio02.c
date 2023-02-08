#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int quantidade_minima, quantidade_maxima;
	float estoque_medio;
	setbuf(stdout, NULL);

	//Entrada
	printf("Informe a quantidade mínima: ");
	scanf("%d", &quantidade_minima);

	printf("Informe a quantodade máxima: ");
	scanf("%d", &quantidade_maxima);

	//Processamentos
	estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

	//Saída
	printf("O estoque médio é %.2f", estoque_medio);
}
