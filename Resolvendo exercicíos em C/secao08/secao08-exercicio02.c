#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int vetor1[10],
		vetor2[10],
		soma[10];
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	for(int i = 0; i < 10; i++){
		printf("Informe o valor para o primeiro vetor 1: ");
		scanf("%d", &vetor1[i]);
		printf("Informe o valor para o primeiro vetor 2: ");
		scanf("%d", &vetor2[i]);
		soma[i] = vetor1[i] + vetor2[i];
	}
	//Processamento
	for(int i = 0; i < 10; i++){
		printf("%d\n", soma[i]);
	}
}
