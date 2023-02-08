package secao07;

import java.util.Scanner;

public class Exercicio05 {

	public static void main(String[] args) {
		String nome, senha;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Infforme o nome: ");
		nome = teclado.next();
		
		System.out.println("Informe a senha: ");
		senha = teclado.next();
		
		while(nome.equals(senha)) {
			System.out.println("ERRO!");
			
			System.out.println("Infforme o nome: ");
			nome = teclado.next();
			
			System.out.println("Informe a senha: ");
			senha = teclado.next();
		}
		
		System.out.println("SUCCESSO!");
		
		teclado.close();
	}

}
