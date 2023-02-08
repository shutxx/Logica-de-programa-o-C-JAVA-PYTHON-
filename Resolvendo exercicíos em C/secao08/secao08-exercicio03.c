#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int vetor[10];
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	for(int i = 0; i < 10; i++){
		printf("Informe o valor para o vetor: ");
		scanf("%d", &vetor[i]);
	}
	//Saida
	for(int i = 9; i>= 0; i--){
		printf("%d\n", vetor[i]);
	}
}
