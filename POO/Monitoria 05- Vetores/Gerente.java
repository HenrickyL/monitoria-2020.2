public class Gerente extends Funcionario {
    
    public Gerente(String nome) {
        super(nome);
        this.precoDiaria = 120;
        this.horasDiarias= 8;
        this.maxHoras = this.horasDiarias*20;
        this.extra = 1.1;
    }

    

    
}
