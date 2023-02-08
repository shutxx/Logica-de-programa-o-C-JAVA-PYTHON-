#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	float p, m;
	char e[8] = "excesso";
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe o peso dos peixes; ");
	scanf("%f", &p);

	//Processamentos
	if(p > 50){
		m = (p - 50) * 4.00;
		//Saída
		printf("Voçê deverá pagar R$:%.2f em multas", m);
	}else{
		m = 0;
		e[0] = 0;
		//Saída
		printf("Multa: %.2f\n", m);
		printf("Exesso: %d", e[0]);
	}
}
