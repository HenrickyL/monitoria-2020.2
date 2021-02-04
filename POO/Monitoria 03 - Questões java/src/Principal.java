import java.util.Scanner;

public class Principal {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        //criar a calculador
        int carga;
        System.out.println("Digite a quantidade de bateria da calculadora:");
        carga = sc.nextInt();
        Calculadora c = new Calculadora(carga);



        String s = "\n\n--------------------------------\n";
        s+="  Operação 0 : SAIR"+"\n";
        s+="  Operação 1 : CARREGAR BATERIA"+"\n";
        s+="  Operação 2 : SOMAR"+"\n";
        s+="  Operação 3 : DIVIDIR"+"\n";
        s+="--------------------------------\n\n";
        //System.out.println(s);
        
        boolean start = true;
       
        


        while(start){
            System.out.println(s);
            int op;
            System.out.println("Digite a Operação:");
            op = sc.nextInt();
            switch (op) {
                case 0:{
                    System.out.println("-----END-------");

                    start=false;
                    break;
                }
                case 1:{
                    System.out.println("-----CARGA-------");

                    System.out.println("Digite o qaunto vc quer carregar:");
                    int value = sc.nextInt();
                    c.charge(value);
                    break; 

                }
                case 2:{
                    System.out.println("-----SOMA-------");

                    int a,b;
                    System.out.println("A:");
                    a = sc.nextInt();
                    System.out.println("B:");
                    b = sc.nextInt();
                    c.sum(a, b);
                    break;
                }
                case 3:{
                    System.out.println("-----DIVISÃO-------");
                    int a,b;
                    System.out.println("A:");
                    a = sc.nextInt();
                    System.out.println("B:");
                    b = sc.nextInt();
                    c.div(a, b);
                    break;
                }
                default:
                    System.out.println("Error");
                    break;
            }
        }
        
        
        //sc.close();
    }
}