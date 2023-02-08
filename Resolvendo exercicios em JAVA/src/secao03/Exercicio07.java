package secao03;

import java.util.Scanner;

public class Exercicio07 {
	public static void main(String[] args) {
		float altura, pesso_ideal;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Qual sua altura? ");
		altura = teclado.nextFloat();
		
		pesso_ideal = (float)(altura * 72.7) - 58;
		
		System.out.printf("Seu pesso ideal seria "+ pesso_ideal);
		
		teclado.close();
	}

}
