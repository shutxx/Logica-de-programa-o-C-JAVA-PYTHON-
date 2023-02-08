#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int numero;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe um número entre 1 e 10: ");
	scanf("%d", &numero);

	//Processamentos
	while(numero < 1 && numero > 10){
		printf("Informe um número entre 1 e 10: ");
		scanf("%d", &numero);
	}
	for(int i = 1; i <= 10; i++){
		printf("%d X %d = %d\n", numero, i, (numero * i));
	}
}
