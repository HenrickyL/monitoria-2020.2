public class Calculadora{
    private int  bateria;
    private int maxBateria;
    private double display;

    //construtor
    public Calculadora(int maxBateria){
        this.maxBateria = maxBateria;
        this.bateria = 1;
        this.display=0;
        System.out.println(this.show());
    }
    //metodos
    public void charge(int value){
        if(value>=0 ){
            if(value+this.bateria <= this.maxBateria){
                this.bateria += value+1;
            }
            else
                this.bateria = this.maxBateria+1;
            System.out.println(this.show());
            //System.out.println("<Bateria em "+this.bateria+"%>");
        }else
            System.out.println("<Valor Inválido!>");
    }
    public void usarBateria(){
        if(this.bateria-1 >=0){
            this.bateria--;
        }else{
            System.out.println("<Bateria Insuficiente!>");
        }
    }

    public void sum(int a, int b){
        this.display = a+b;
        System.out.println(this.show());
    }
    public void div(int a, int b){
        if(b!=0){
            this.display = a/b;
            System.out.println(this.show());
        }else{
            usarBateria();
            System.out.println("<Error: divisao por zero>");
        }
    }

    public String show(){
        usarBateria();
        return "display = "+this.display+", battery = "+this.bateria;
    }

    //getters e setters  ////////////////////////////////

    public int getBateria() {
        return bateria;
    }

    public void setBateria(int bateria) {
        this.bateria = bateria;
    }

    public int getMaxBateria() {
        return maxBateria;
    }

    public void setMaxBateria(int maxBateria) {
        this.maxBateria = maxBateria;
    }

    public double getDiplay() {
        return display;
    }

    public void setDiplay(double diplay) {
        this.display = diplay;
    }
    

}