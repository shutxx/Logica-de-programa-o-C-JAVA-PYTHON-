#include <stdio.h>
#include <ctype.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	float altura, peso_ideal;
	char sexo;
	setbuf(stdout, NULL);//limpar a memoria cach

	//Entrada
	printf("Informe sua altura; ");
	scanf("%f", &altura);
	printf("Informe o sexo m/f: ");
	scanf(" %c", &sexo);

	//Processamentos
	if(tolower(sexo) == 'm'){
		peso_ideal = (72.7 * altura) - 58;
		//Saída
		printf("Seu peso ideal é %.2f", peso_ideal);
	}
	if(tolower(sexo) == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
		//Saída
		printf("Seu peso ideal é %.2f", peso_ideal);
	}
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
		//Saída
		printf("Sexo não reconhecido. \n");
	}
}
