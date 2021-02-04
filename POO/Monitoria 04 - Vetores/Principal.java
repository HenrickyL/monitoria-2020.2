import java.util.Scanner;
           
public class Principal{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        boolean start=true;

        String s = "------------------------\n";
        s+= "0 - Sair \n";
        
        s+= "1 - Cria aluno\n";
        s+= "2 - busca aluno\n";  
        s+= "3 - \n";   
        s+= "4 - Calcula media individual\n";
        s+= "5 - Calcula médoa geral\n";
        s+= "6 - Printar Turma\n";

        s += "------------------------\n\n";
        
        System.out.println(s);

        int op;
        Turma t = new Turma("POO");

        while(start){
            System.out.println(s);

            System.out.println("Digite a operação: ");
            op = sc.nextInt();
            switch (op) {
                case 0:{
                    start=false;
                    System.out.println("EXIT");
                    break;
                }
                case 1:{
                    System.out.println("\n>>CRIAR ALUNO<<\n");

                    Aluno a = new Aluno(sc);
                    t.addAluno(a);
                    break;
                }
                case 2:{
                    System.out.println("\n>>BUSCAR ALUNO<<\n");
                    System.out.println("Buscar por id ou nome: ");
                    String c = sc.next();
                    if(c.equals("id")){

                        System.out.println("    id: ");
                        int id = sc.nextInt();
                        Aluno a= t.busca(id);
                        System.out.println(a);

                    }else if(c.equals("nome")){
                        System.out.println("    nome: ");
                        String nome = sc.next();
                        Aluno a= t.busca(nome);
                        System.out.println(a);
                    }
                    break;
                }
                case 4:{
                    System.out.println("\n>>Calculando Media individual...<<");
                    t.calcMediaIndividual();
                    break;
                }  
                case 5:{
                    System.out.println("\n>>Calculando Media Geral...<<");
                    t.calcMedia();
                    System.out.println("Media Geral: "+t.getMedia());
                    break;
                } 
                case 6:{
                    System.out.println("\n>>TURMA<<");
                    System.out.println(t);
                    break;
                } 
            
                default:
                System.out.println("<Operação invalida>");
                    break;
            }
        }





        sc.close();
    }
}