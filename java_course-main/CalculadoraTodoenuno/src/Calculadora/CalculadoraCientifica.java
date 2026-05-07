package Calculadora;

public class CalculadoraCientifica extends CalculadoraBasica{
	public CalculadoraCientifica() {
		super();
	}
	public double getPotencia() {
		float base = super.valor1;
		float exponente = super.valor2;
		super.resultado = Math.pow(base, exponente);
		this.historial +=" " + base + " ^ " + exponente + " = " + super.resultado + "\n";
		return super.resultado;
	}
	public double getRaiz() {
		float base = super.valor1;
		float exponente = super.valor2; 
		super.resultado = Math.pow(base, 1/exponente);
		this.historial +=" " + base + " R " + exponente + " = " + super.resultado + "\n";
		return super.resultado;
	}
}





