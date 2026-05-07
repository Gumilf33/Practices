package pokemon;

public class Test {
	public static void main(String[] args) {
		Tipo telec = new Tipo ("Electricidad");
		Tipo tagua = new Tipo ("Agua");
		Pokemon pikachu = new Pokemon(telec,"Pikachu",100,10,10,10);
		Pokemon squirtle = new Pokemon(tagua,"Squirtle",90,10,10,10);
	Combate mortalCombat = new Combate(pikachu,squirtle);
	mortalCombat.iniciar();
	}
}

