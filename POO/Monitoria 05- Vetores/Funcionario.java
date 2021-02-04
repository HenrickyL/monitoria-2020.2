//trabalhar com herança

abstract public class Funcionario{
    protected String nome;
    protected double precoDiaria;
    protected int qtdDiaria;
    protected int maxHoras;
    protected int horasDiarias;
    protected double bonus;
    protected double extra;

    public Funcionario(String nome) {
        this.nome = nome;
        this.qtdDiaria=0;
        this.bonus=0;
    }

    public void checkIn(){
        int horas = this.qtdDiaria*horasDiarias;//qtd de horas até o momento
        if(horas+horasDiarias <= maxHoras){
            this.qtdDiaria++;
        }else{
            this.bonus += this.precoDiaria*this.extra;
        }
    };

    public void resetMes(){
        this.bonus =0;
    }
    public double calcSalario() {
        double salario = 0;
        salario = this.precoDiaria*qtdDiaria + bonus;
        return salario;
    }

    @Override
    public String toString() {
        String s ="";
        s+="\tNome:" +this.nome+"\n";
        //identificar o cargo
        if(this instanceof Caixa){
            s+="\tCargo: " +"Caixa"+"\n";

        }else if(this instanceof Vendedor){
            s+="\tCargo: " +"Vendedor"+"\n";

        }else if(this instanceof Gerente){
            s+="\tCargo: " +"Gerente"+"\n";

        }
        double salario = this.calcSalario();
        s+="\tSalario: "+salario+"\n";
        s+="---------------------\n\n";
        return s;

    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getPrecoDiaria() {
        return precoDiaria;
    }

    public void setPrecoDiaria(double precoDiaria) {
        this.precoDiaria = precoDiaria;
    }

    public int getQtdDiaria() {
        return qtdDiaria;
    }

    public void setQtdDiaria(int qtdDiaria) {
        this.qtdDiaria = qtdDiaria;
    }

    public int getMaxHoras() {
        return maxHoras;
    }

    public void setMaxHoras(int maxHoras) {
        this.maxHoras = maxHoras;
    }

    public int getHorasDiarias() {
        return horasDiarias;
    }

    public void setHorasDiarias(int horasDiarias) {
        this.horasDiarias = horasDiarias;
    }

    public double getBonus() {
        return bonus;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

    public double getExtra() {
        return extra;
    }

    public void setExtra(double extra) {
        this.extra = extra;
    }

       
    
}