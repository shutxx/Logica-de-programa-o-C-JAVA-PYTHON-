#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada

	//Processamentos
	for(int i = 100; i <= 200; i++){
		//Saída
		//printf("%d\n", i);
		if(i % 2 != 0){
			//Saída
			printf("O número %d e ímpar\n", i);
		}
	}
}
