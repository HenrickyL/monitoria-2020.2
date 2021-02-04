public class Vendedor extends Funcionario{
    private String regiao;
    
    public Vendedor(String nome, String regiao) {
        super(nome);
        this.regiao = regiao;
        this.precoDiaria = 100;
        this.horasDiarias= 6;
        this.maxHoras = 30;
        this.extra = 1.2;
        
    
    }

    @Override
    public void checkIn(){
        int horas = this.qtdDiaria*horasDiarias;//qtd de horas até o momento
        if(horas+horasDiarias <= maxHoras){
            this.qtdDiaria++;
        }else{
            this.bonus += this.precoDiaria*this.extra;
        }
        //compensação por região
        if(regiao.equals("Centro")){
            bonus+=40;
        }else if(regiao.equals("sul")){
            bonus += 100;
        }else if(regiao.equals("Norte")){
            bonus+=30;
        }

    };

   

    
    

   

}