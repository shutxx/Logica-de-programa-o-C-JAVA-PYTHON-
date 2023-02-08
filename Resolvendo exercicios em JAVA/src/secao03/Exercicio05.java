package secao03;

import java.util.Scanner;

public class Exercicio05 {
	public static void main(String[] args) {
		int metros, centimetros;
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Informe o valor em metros: ");
		metros = teclado.nextInt();
		
		centimetros = (metros * 100);
		
		System.out.print(metros + " metros em centimetros é " + centimetros);
		teclado.close();
	}

}