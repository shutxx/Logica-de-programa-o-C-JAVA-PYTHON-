#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada

	//Processamentos
	for(int i = 1; i <= 100; i++){
		//Saída
		printf("%d\n", i);
		if(i % 10 == 0){
			//Saída
			printf("O número %d é múltiplo de 10\n", i);
		}
	}
}
