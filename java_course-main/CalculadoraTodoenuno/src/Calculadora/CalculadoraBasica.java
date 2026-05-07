package Calculadora;

public class CalculadoraBasica {
	String historial;
	float valor1,valor2;
	double resultado;
	
	
	public CalculadoraBasica() {
		this.valor1=0;
		this.valor2=0;
		this.resultado=0;
		this.historial = "Este es el historial\n";
	}
	
	public String borrarHistorial() {
		this.historial = "El Historial se ha borrado";
		return this.historial;
	}

	public void setNumeros(float n1, float n2) {
		this.valor1=n1;
		this.valor2=n2;
	}
	
	public double getSuma() {
		this.resultado= this.valor1+this.valor2;
		this.historial +=" " + valor1 + " + " + valor2 + " = " + this.resultado + "\n";
		return this.resultado;
	}
	
	public double getResta() {
		this.resultado = this.valor1-this.valor2;
		this.historial +=" " + valor1 + " - " + valor2 + " = " + this.resultado + "\n";
		return this.resultado;
	}
	
	public double getMultiplicar() {
		this.resultado = this.valor1*this.valor2;
		this.historial +=" " + valor1 + " * " + valor2 + " = " + this.resultado + "\n";
		return this.resultado;
	}
	
	public double getDivision() {
		this.resultado = this.valor1/this.valor2;
		this.historial +=" " + valor1 + " / " + valor2 + " = " + this.resultado + "\n";
		return this.resultado;
	}
	
	
}
