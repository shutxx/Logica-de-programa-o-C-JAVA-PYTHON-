#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int n;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &n);

	//Processamentos
	if(n > 100){
		printf("%d", n);
	}else{
		n = 0;
		printf("%d", n);
	}
}
