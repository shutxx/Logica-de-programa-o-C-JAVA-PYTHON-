#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	float indice;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe o índice de poluição: ");
	scanf("%f", &indice);

	//Processamentos
	if(indice >= 0.3 && indice < 0.4){
		//Saída
		printf("Atenção: Indústrias do 1o grupo devem suspender as atividades.");
	}else if(indice >= 0.4 && indice < 0.5){
		//Saída
		printf("Atenção: Indústrias do 1o e 2o grupo devem suspender as atividades.");
	}else if (indice >= 0.5){
		//Saída
		printf("Atenção: todos os grupos devem suspender as atividades");
	}

}
