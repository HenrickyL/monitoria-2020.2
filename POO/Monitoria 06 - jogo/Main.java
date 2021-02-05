import java.util.Scanner;
import java.io.IOException;
import java.util.Scanner;
public class Main{
    public static void main(String[] args) throws IOException, InterruptedException{
        Scanner sc = new Scanner(System.in);
        Game g = new Game(sc);

        g.play();

        sc.close();
    }
}