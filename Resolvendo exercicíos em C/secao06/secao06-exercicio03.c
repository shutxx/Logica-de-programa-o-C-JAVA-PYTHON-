#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int numero, p = 0, i = 0;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamentos
	if(numero % 2 == 0){
		p = numero;
	}else{
		i = numero;
	}

	//Saída
	printf("%d\n", p);
	printf("%d", i);

}
