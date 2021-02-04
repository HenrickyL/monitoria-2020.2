import java.util.Scanner;

public class Aluno {
    private static int gerador=1;
    private int id;
    private String nome;
    private double n1,n2;
    private double media;

    public Aluno(Scanner sc){
        System.out.println("Digite o nome: ");
        this.nome= sc.next();
        System.out.println("Digite o n1: ");
        this.n1 = sc.nextInt();
        System.out.println("Digite o n2: ");
        this.n2 = sc.nextInt();
        this.id = gerador;
        gerador++;
        media=0;
    }
    public Aluno(String nome){
        this.id = gerador;
        this.nome = nome;
        n1=0;
        n2=0;
        media=0;
        gerador++;
    }

    public String getNome() {
        return nome;
    }
    public int getId(){
        return this.id;
    }

    public void calculaMedia(){
        this.media = (n1+n2)/2;
    }
    //getter e setter
    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getN1() {
        return n1;
    }

    public void setN1(double n1) {
        this.n1 = n1;
    }

    public double getN2() {
        return n2;
    }

    public void setN2(double n2) {
        this.n2 = n2;
    }

    public double getMedia() {
        return media;
    }

    public void setMedia(double media) {
        this.media = media;
    }




    
}
