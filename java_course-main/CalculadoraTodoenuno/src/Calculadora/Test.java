package Calculadora;

public class Test {
		public static void main(String[] args) {
			//declarar la calculadora normal
			CalculadoraCientifica miCalculadora;
			miCalculadora = new CalculadoraCientifica();
			miCalculadora.setNumeros(20, 2);
			//Prueba de Impresion de funciones;
			System.out.println(miCalculadora.getSuma());
			System.out.println(miCalculadora.getResta());
			System.out.println(miCalculadora.getMultiplicar());
			System.out.println(miCalculadora.getDivision());
			System.out.println(miCalculadora.getPotencia());
			System.out.println(miCalculadora.getRaiz());
			//Prueba de Impresion de historial y borrado de la misma
			System.out.println(miCalculadora.historial);
			System.out.println(miCalculadora.borrarHistorial());
		}
}	
