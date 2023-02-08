package secao02;

import java.util.Scanner;

public class Exercicio02 {

	public static void main(String[] args) {
		//variaveis
		int num1, num2, soma, multiplicacao;
		Scanner teclado = new Scanner(System.in);
		
		//entradas
		System.out.println("Informe o primeiro número: ");
		num1 = teclado.nextInt();
		System.out.println("Informe o segundo número: ");
		num2 = teclado.nextInt();
		
		//processamento
		soma = num1 + num2;
		multiplicacao = soma * num1;
		
		//saida
		System.out.println("O resultado da soma e " + soma);
		System.out.println("O resultado da multiplicação e " + multiplicacao);
		
		teclado.close();
		
	}

}
