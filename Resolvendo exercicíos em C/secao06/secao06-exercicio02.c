#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int numero, num1, num2;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamentos
	if(numero > 0){
		num1 = numero;
		printf("O %d número é positivo.", numero);
	}else{
		num2 = numero;
		printf("O %d número é negativo.", numero);
	}
}
