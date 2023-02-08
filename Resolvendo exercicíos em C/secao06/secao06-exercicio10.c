#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int idade;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Idade do nadador: ");
	scanf("%d", &idade);

	//Processamentos
	if(idade >= 5 && idade <= 7){
		//Saída
		printf("Infantil A");
	}else if(idade >= 8 && idade <= 11){
		//Saída
		printf("Infantil B");
	}else if(idade >= 12 && idade <= 13){
		//Saída
		printf("Juvenil A");
	}else if(idade >= 14 && idade <= 17){
		//Saída
		printf("Juvenil B");
	}else{
		//Saída
		printf("Adulto");
	}
}
