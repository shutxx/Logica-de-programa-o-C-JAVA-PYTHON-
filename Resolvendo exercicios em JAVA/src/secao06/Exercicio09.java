package secao06;

import java.util.Scanner;

public class Exercicio09 {

	public static void main(String[] args) {
		float indice;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Informe o índice de poluição: ");
		indice = teclado.nextFloat();
		
		if(indice >= 0.3 && indice < 0.4) {
			System.out.println("Atenção: Indústrias do primeiro grupo devem suspender as atividades.");
		}else if(indice >= 0.4 && indice < 0.5) {
			System.out.println("Atenção: Indústrias do primeiro e segundo grupo devem suspender as atividades.");
		}else if(indice >= 0.5) {
			System.out.println("Atenção: Todos os grupos deevem suspender as atividades.");
		}
		
		teclado.close();
	}

}
