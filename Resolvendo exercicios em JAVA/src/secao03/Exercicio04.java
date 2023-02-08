package secao03;

import java.util.Scanner;

public class Exercicio04 {
	public static void main(String[] args) {
		int num1, num2, soma;
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Informe o primeiro numero: ");
		num1 = teclado.nextInt();
		
		System.out.print("Informe o segundo numero: ");
		num2 = teclado.nextInt();
		
		soma = (num1 + num2);
		
		System.out.print("A soma é " + soma);
		
		teclado.close();
	}
}