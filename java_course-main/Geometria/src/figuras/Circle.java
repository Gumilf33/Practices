package figuras;

public class Circle extends Figura{
	private float rad;

	public Circle(float rad) {
		this.rad = rad;
	}
	public double getArea() {
		return Math.PI*this.rad*this.rad;
	}
}
