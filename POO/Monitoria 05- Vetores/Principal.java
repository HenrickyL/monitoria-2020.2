
import java.util.Scanner;
import java.util.ArrayList;
public class Principal {
    
    public static int fat(int n){
        //n! = n*(n-1)*(n-2)*...*1
        //5! = 5*4*3*2*1
        int res=1;
        for(int i=1; i<=n; i++){
            res = res* i;
        }
        return res;
    }
    
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        ArrayList<Funcionario> funcionarios = new ArrayList<Funcionario>();
        

        String s = "---------------------\n";
        s+= "0 - sair\n";
        s+= "1 - Adicionar Funcionario\n";
        s+= "2 - checkin Geral\n";
        s+= "3 - CheckIn Individual\n";
        s+= "4 - calcular Salario\n";
        s+= "5 - Funcionarios\n";
        s += "---------------------\n\n";

        boolean start =true;
        int op;
        while(start){
            System.out.println(s);
            System.out.println("Digite a operação: ");
            op=sc.nextInt();
            switch (op) {
                case 0:
                    start=false;
                    break;
                case 1:
                    System.out.println(">>ADICIONAR FUNCIONARIO<<\n");
                    System.out.println("Qual cargo?");
                    String cargo = sc.next();
                    System.out.println("Nome: ");
                    String nome = sc.next();
                    Funcionario f;
                    if(cargo.equals("Gerente")){
                        f = new Gerente(nome);
                        
                    }else if(cargo.equals("Caixa")){
                        f = new Caixa(nome);
                    }else if(cargo.equals("Vendedor")){
                        String regiao = sc.next();
                        f = new Vendedor(nome, regiao);
                    }else{
                        f = null;
                    }
                    if(f != null)
                        funcionarios.add(f);
                    break;
                case 2:
                    System.out.println(">>CHECKIN GERAL<<\n");
                    for(Funcionario F: funcionarios){
                        F.checkIn();
                    }
                    break;
                case 4:
                    System.out.println(">>CALCULAR SALARIO GERAL<<\n");
                    for(Funcionario F: funcionarios){
                        F.calcSalario();
                    }
                    break;
                case 5:
                    System.out.println(">>FUNCIONARIOS<<\n");
                    for(Funcionario F: funcionarios){
                        System.out.println(F);
                    }
                    break;
                    
                default:
                    break;
            }
        }
        



        sc.close();
    }
}