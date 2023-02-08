#include <stdio.h>
#include <string.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	char nome[100], senha[100];
	setbuf(stdout, NULL); //limpar a memoria cach

	//Entrada
	printf("Informe o nome: ");
	gets(nome);
	printf("Informe o senha: ");
	gets(senha);

	//Processamentos
	while(!strcmp(nome, senha)){
		printf("Erro! Nome de usuário e senha devem ser diferentes\n");
		printf("Informe o nome: ");
		gets(nome);
		printf("Informe o senha: ");
		gets(senha);
	}
	printf("Concluído!");
}
