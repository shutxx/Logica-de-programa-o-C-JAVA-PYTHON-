#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int n, maior = 0;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &n);

	//Processamentos
	while(n != 0){
		if(n > maior){
			maior = n;
		}
		//Entrada
		printf("Informe um número: ");
		scanf("%d", &n);
	}
	//Saída
	printf("O maior número é %d", maior);
}
