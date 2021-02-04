import java.util.Arrays;

public class Turma {
    private static int capacidade = 30;
    private String nome;
    private Aluno[] alunos;
    private int qtd;
    private double media;

    public Turma(String nome) {
        this.nome = nome;
        this.qtd = 0;
        this.alunos = new Aluno[this.capacidade];
    }

    public void addAluno(Aluno a) {
        this.alunos[qtd] = a;
        qtd++;
    }

    public void calcMediaIndividual() {

        for (int i=0;i<qtd;i++) {
            Aluno a = alunos[i];
            a.calculaMedia();
        }
    }
    public void calcMedia(){
        double soma =0;
        for (int i=0;i<qtd;i++) {
            Aluno a = alunos[i];
            soma+=a.getMedia();
        }
        this.media = soma/this.qtd;
    }

    public Aluno busca(String nome){
        for (int i=0;i<qtd;i++) {
            Aluno a = alunos[i];
            if(a.getNome().equals(nome)){
                return a;
            }
        }
        return null;
    }

    public Aluno busca(int id){
        for (int i=0;i<qtd;i++) {
            Aluno a = alunos[i];
            if(a.getId() == id){
                return a;
            }
        }
        return null;
    }


    // getter e setter

    public static int getCapacidade() {
        return capacidade;
    }

    public static void setCapacidade(int capacidade) {
        Turma.capacidade = capacidade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getQtd() {
        return qtd;
    }

    public void setQtd(int qtd) {
        this.qtd = qtd;
    }

    

    @Override
    public String toString() {
       String s = "";
       s+="Turma: "+this.nome+"\n";
       s+="Alunos: "+qtd+"/"+capacidade+"\n";
       s+="----------------------\n";
       for (int i=0;i<qtd;i++) {
           Aluno a = alunos[i];
           s+="     Nome:"+ a.getNome()+"\n";
           s+="     Media:"+a.getMedia()+"\n";
           s+="\n######################\n";
       }
       s+="----------------------\n";
       return s;
       
    }

    

    public double getMedia() {
        return media;
    }

    public void setMedia(double media) {
        this.media = media;
    }



}
