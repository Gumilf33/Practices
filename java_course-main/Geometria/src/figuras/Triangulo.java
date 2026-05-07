package figuras;

public class Triangulo extends Figura{
	private float base,altura;
	
	public Triangulo(float b, float a) {
		this.base= b;
		this.altura= a;
	}
	public double getArea() {
		return (this.base*this.altura)/2;
	}
}

