package secao06;

import java.util.Scanner;

public class Exercicio03 {

	public static void main(String[] args) {
		int numero, p, i;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Informe um número: ");
		numero = teclado.nextInt();
		
		if(numero % 2 == 0) {
			p = numero;
			System.out.println("Número par");
		}else {
			i = numero;
			System.out.println("Número ímpar");
		}
		
		

		teclado.close();
	}

}
