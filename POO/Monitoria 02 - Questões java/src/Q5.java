

import java.util.Scanner;
//import Pessoa;




public class Q5 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n;
		System.out.println("Digite a quantidade de pessoas: ");
		n=sc.nextInt();
		//criar um vetor de pessoas
		Pessoa[] v = new Pessoa[n];
		
		//receber informações
		for(int i=0; i< n; i++) {
			System.out.println("Digite o sexo da Pessoa "+(i+1)+"ª:" );
			String sexo = sc.next();
			System.out.println("Digite a altura da Pessoa "+(i+1)+"ª:" );
			double altura;
			altura = sc.nextDouble();
			Pessoa p = new Pessoa(sexo, altura);
			v[i] = p;
		}
		
		//quantidade homens e mulheres
		int qtdF=0 ;
		int qtdM=0;
		// a pessoa mais alta
		Pessoa Maior = v[0];
		
		//verificar os dados
		for(Pessoa p : v ){ 
			if(p.getSexo().equals("M")) {
				qtdM++;
			}else  if(p.getSexo().equals("F")){
				qtdF++;
			}
			//verificar a maior pessoa
			if(p.getAltura() > Maior.getAltura()) {
				Maior = p;
			}
		}
		
		System.out.println("Qtd Homens é "+ qtdM);
		System.out.println("Qtd Homens é "+ qtdF);
		System.out.println(" a maior pessoa tem "+ Maior.getAltura()+" metros e é do sexo "+ Maior.getSexo());
		
		
		
		
		
		sc.close();
	}
}
