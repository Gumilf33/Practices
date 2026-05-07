package ambolado;

public class Bucle {
	public static void main(String[] args) {
		int inicio,limite;
		limite = 10;
		for (inicio = 0 ; inicio < limite ; inicio ++) {
			System.out.println("Imprimo un " + inicio);
		}
		int cat1,cat2, hip;
		System.out.println("-> c^2 = a^2 + b^2");
		for (hip = 1 ; hip <=1000; hip++) {
			for (cat1 = 1; cat1 < 1000; cat1++)	{
				for(cat2 = 1; cat2 <1000; cat2++) {
					if (hip == Math.sqrt(cat1*cat1+cat2*cat2)) {
						System.out.println("a. " 
								+ hip + "^2" + " = " + cat1 + "^2 + " + cat2 + "^2");
					}
				}
			}	
		}
	}
}
