import java.util.Scanner;
public class a003 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int M = scn.nextInt();
        int D = scn.nextInt();
        int S = (M*2+D)%3;

        switch(S){
            case 0:
                System.out.println("普通");
                break;
            case 1:
                System.out.println("吉");
                break;
            case 2:
                System.out.println("大吉");
                break;
        }
        scn.close();
    }
}