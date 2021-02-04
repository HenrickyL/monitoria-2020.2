public class Caixa extends Funcionario{


    public Caixa(String nome){
        super(nome);
        this.precoDiaria = 80;
        this.horasDiarias= 8;
        this.maxHoras = this.horasDiarias*22;
        this.extra =1.25;
    }

   

}
