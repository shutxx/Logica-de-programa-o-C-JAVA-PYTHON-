#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int vetor[10];
	char tem_maior_50 = 0;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entradas
	for(int i = 0; i < 10; i++){
		printf("Informe o valor para o vetor %d/10: ", (i+1));
		scanf("%d", &vetor[i]);
	}

	for(int i = 0; i < 10; i++){
		if(vetor[i] > 50){
			printf("O número %d está na posição %d\n", vetor[i], i);
			tem_maior_50 = 1;
		}
	}
	if(tem_maior_50 < 1){
		printf("Não existe número maior que 50.");
	}
}
