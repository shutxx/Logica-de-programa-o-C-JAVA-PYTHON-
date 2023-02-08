package secao03;

import java.util.Scanner;

public class Exercicio06 {

	public static void main(String[] args) {
		float valor_hora, salario;
		int horas_trabalhadas;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Qual o valor você ganha por hora? ");
		valor_hora = teclado.nextFloat();
		
		System.out.println("Quantas horas você trabalhou neste mês? ");
		horas_trabalhadas = teclado.nextInt();
		
		salario = (horas_trabalhadas * valor_hora);
		
		System.out.println("Neste mês você vai receber R$:" + salario);
		
		teclado.close();
	}

}
