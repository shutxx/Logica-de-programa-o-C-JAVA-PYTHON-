#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int valor, maior = -999, menor = 999, soma = 0;
	float media;
	setbuf(stdout, NULL); //limpar a memoria cach

	//Processamentos
	for(int i = 0; i < 10; i++){
		//Entrada
		printf("Informe um valor: ");
		scanf("%d", &valor);
		//Processamentos
		if(valor > 0){
			if(valor > maior){
				maior = valor;
			}
			if(valor < menor){
				menor = valor;
			}
			soma = soma + valor;
		}else{
			i--;
		}
	}
	media = soma / 10;
	//Saida
	printf("O maior número é %d\n", maior);
	printf("O menor número é %d\n", menor);
	printf("A media dos numeros é %2.f", media);
}
