//package src;

public class Pessoa {
	private String sexo;
	private double altura;
	//////////////////
	public Pessoa(String sexo, double altura) {
		this.sexo = sexo;
		this.altura = altura;
	}
////////////////////
	public String getSexo() {
		return sexo;
	}

	public void setSexo(String sexo) {
		this.sexo = sexo;
	}

	public double getAltura() {
		return altura;
	}

	public void setAltura(double altura) {
		this.altura = altura;
	}

	@Override
	public String toString() {
		return "Pessoa [sexo=" + sexo + ", altura=" + altura + "]";
	}
	
	
	
	
	
	
	
	
}
