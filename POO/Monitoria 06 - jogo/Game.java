import java.util.Scanner;
import java.io.IOException;

public class Game {
    private int _M[][];
    private char _S[][];
    private Scanner sc;
    private int maxPoints;
    private int points;
    private boolean start;
    private int winner=0;
    //private Player p1,p2;


    public Game(Scanner sc){
        this._M = new int[3][3];
        this._S = new char[3][3];
        this.sc = sc;
        this.start=false;
        this.maxPoints=9;
        this.points=0;
        //this.p1 = p1;
        //this.p2 = p2;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                _M[i][j]=0;
                _S[i][j]=' ';
            }
        }
    }

    public void play()throws IOException, InterruptedException{
        start=true;
        draw();
        while(this.start){
            tick();
            draw();
        }
    }

    private void tick(){
        if(points%2==0){
            this.tickJogadaP1();
        }else{
            this.tickJogadaP2();
        }
        this.tickConvertMatrix();
    }
    private void draw()throws IOException, InterruptedException{
        this.drawClear();
        this.drawMap();
        if(winner != 0){
            System.out.println( "O Jogador "+winner+" Ganhou!");
        }
    }

    ///////////////////////////////////////
    private boolean verDP(int i, int j){
        if( _M[i-1][j-1] ==  _M[i][j] && _M[i][j]  == _M[i+1][j+1]&& _M[i][j]!=0 ){
            //modificar o draw
            
            //identificar o ganhador
            if(_M[i][j] == 1){
                winner=1;
            }else if(_M[i][j] == 2){
                winner =2;
            }
            _M[i-1][j-1] = 3; 
            _M[i][j] = 3;
            _M[i+1][j+1] =3;
            return true;
        }
        return false;
    }
    private boolean verDS(int i, int j){
        if( _M[i-1][j+1] ==  _M[i][j] && _M[i][j]  == _M[i+1][j-1]&& _M[i][j]!=0 ){
            
            //identificar o ganhador
            if(_M[i][j] == 1){
                winner=1;
            }else if(_M[i][j] == 2){
                winner =2;
            }
            _M[i-1][j+1] = 3; 
            _M[i][j] = 3;
            _M[i+1][j-1] =3;
            return true;
        }
        return false;
    }
    private boolean verW(int i, int j){
        if( _M[i][j-1] ==  _M[i][j] && _M[i][j]  == _M[i][j+1]&& _M[i][j]!=0 ){
            
            //identificar o ganhador
            if(_M[i][j] == 1){
                winner=1;
            }else if(_M[i][j] == 2){
                winner =2;
            }
            _M[i][j-1] = 3; 
            _M[i][j] = 3;
            _M[i][j+1] =3;
            return true;
        }
        return false;
    }
    private boolean verH(int i, int j){
        if( _M[i-1][j] ==  _M[i][j] && _M[i][j]  == _M[i+1][j]  && _M[i][j]!=0){
            
            if(_M[i][j] == 1){
                winner=1;
            }else if(_M[i][j] == 2){
                winner=2;
            }
            _M[i-1][j] = 3;  
            _M[i][j] = 3;
            _M[i+1][j] =3;
            return true;
        }
        return false;
    }
    private boolean Verify(){
        boolean res = verH(1,0) || verH(1,2) || verW(0,1) || verW(2,1) || verW(1,1) ||verH(1,1) || verDP(1, 1) || verDS(1, 1);
        return res;
    }
    private void tickWinner(){
        if(points == maxPoints){
            System.out.println("<EMPATE>");
            start=false;
        }else{
            if(Verify()){
                start=false;
                System.out.println( "O Jogador "+winner+" Ganhou!");
            }

        }
    }
    private void tickJogadaP1(){
        int x,y;
        System.out.print("J1: Posição x: ");
        x = sc.nextInt();
        System.out.print("J1: Posição y: ");
        y = sc.nextInt();
        if(_M[y][x]==0 && x<3 && y<3 && (x>=0)&&y>=0){
            _M[y][x] = 1;
            points++;
            tickWinner();
        }else{
            System.out.println("<posição invalida>");
            tickJogadaP1();
        }
    } 
    private void tickJogadaP2(){
        int x,y;
        System.out.print("J2: Posição x: ");
        x = sc.nextInt();
        System.out.print("J2: Posição y: ");
        y = sc.nextInt();
        if(_M[y][x]==0 && x<3 && y<3 && (x>=0)&&y>=0){
            _M[y][x] = 2;
            points++;
            tickWinner();
        }else{
            System.out.println("<posição invalida>");
            tickJogadaP2();
        }
    }
    private void drawMap(){
        String s = "";
        for(int i=0;i<3;i++){
            for(int j=0; j<3;j++){
                if(j!=2)
                s+= "\t"+_S[i][j]+ "\t |";
                else
                s+= "\t"+_S[i][j]+ "\t";
                
            }
            s+="\n";
            if(i!=2)
                s+="--------------------------------------------------\n";
        }
        
        System.out.println(s);
    }
    
    private void drawClear() throws IOException, InterruptedException{
        if (System.getProperty("os.name").contains("Windows"))
            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
        else
            Runtime.getRuntime().exec("clear");
    }
    private void tickConvertMatrix(){
        //1 - O // 2 - X
        for(int i=0;i<3;i++){
            for(int j=0; j<3;j++){
                if(_M[i][j]==0){
                    _S[i][j]=' ';
                }else if(_M[i][j]==1){
                    _S[i][j]='O';
                }else if(_M[i][j]==2){
                    _S[i][j]='X';
                }else if(_M[i][j]==3){
                    _S[i][j]='#';
                }
            }
        }


    }

}