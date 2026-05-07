package figuras;

public class Test {
	public static void main(String[] args) {

		Cuadrado cuadrado = new Cuadrado(10);		
		Rectangulo rectangulo = new Rectangulo(10,5);
		Triangulo triangulo = new Triangulo(10,15);
		Circle circle = new Circle(5);
		Elipse elipse = new Elipse(10,15);
		
		System.out.println("El area del rectangulo" + rectangulo.getArea());
		System.out.println("El area del cuadrado es " + cuadrado.getArea());
		System.out.println("El area de un Triangulo es " + triangulo.getArea());
		System.out.println("El area del circulo es" + circle.getArea());
		System.out.println("El area de la elipse es" + elipse.getArea());
	}
}
