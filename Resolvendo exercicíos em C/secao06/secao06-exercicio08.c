#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int numero;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamentos
	if (numero % 2 == 0){
		if(numero > 0){
			//Saída
			printf("O número %d é par e positivo.", numero);
		}else{
			//Saída
			printf("O número %d é par e negativo.", numero);
		}
	}else{
		if(numero > 0){
			//Saída
			printf("O número %d é ímpar e positivo.", numero);
		}else{
			//Saída
			printf("O número %d é ímpar e negativo.", numero);
		}
	}

}
