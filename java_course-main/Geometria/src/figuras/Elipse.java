package figuras;

public class Elipse extends Figura{
	private float a,b;
	
	public Elipse(float a,float b) {
		this.a = a;
		this.b = b;
	}
	
	public double getArea() {
		return Math.PI*this.a*this.b;
	}
	
}
