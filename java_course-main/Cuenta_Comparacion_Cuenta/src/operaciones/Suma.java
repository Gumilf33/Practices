package operaciones;

import java.util.Scanner;

public class Suma {
	
	public static void main(String arg[]) {
		Scanner entrada = new Scanner(System.in);
		
		int numero1;
		int numero2;
		int suma;
		
		System.out.println("Escriba el primer enter");
		numero1 = entrada.nextInt();
		
		System.out.println("Escriba el segundo entero");
		numero2 = entrada.nextInt();
		
		suma = numero1 + numero2;
		System.out.printf("La suma es %d\n", suma);
	}
}
