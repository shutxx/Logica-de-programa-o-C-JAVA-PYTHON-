#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int vetor[20],
		soma = 0;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	for(int i = 0; i < 20; i++){
		printf("Informe o valor para o vetor %d/20: ", (i+1));
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];
	}
	//Saída
	printf("A soma do vetor é %d", soma);
}
