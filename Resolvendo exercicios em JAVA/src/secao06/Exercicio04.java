package secao06;

import java.util.Scanner;

public class Exercicio04 {

	public static void main(String[] args) {
		float altura, peso_ideal;
		char sexo;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("informe sua altura: ");
		altura = teclado.nextFloat();
		
		System.out.println("Informe o sexo m/f: ");
		sexo = teclado.next().charAt(0);
		
		if (sexo == 'm') {
			peso_ideal = (float)(72.7 * altura) - 58;
			System.out.printf("Seu peso ideal é %.2f",peso_ideal);
		}else if (sexo == 'f') {
			peso_ideal =(float)(62.1 * altura) - (float)44.7;
			System.out.printf("Seu peso ideal é %.2f",peso_ideal);
		}else if(sexo != 'm' && sexo != 'f') {
			System.out.println("Sexo não reconhecido.");
			peso_ideal = 0;
		}
		
		teclado.close();
	}

}
