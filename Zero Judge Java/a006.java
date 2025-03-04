import java.util.Scanner;
public class a006 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int a = scn.nextInt();
        int b = scn.nextInt();
        int c = scn.nextInt();
        
        int judge = b*b-4*a*c;
        int Positive = (-b+(int)Math.sqrt(b*b-4*a*c))/(2*a);
        int Negative = (-b-(int)Math.sqrt(b*b-4*a*c))/(2*a);

        if(judge>0){
            System.out.printf("Two different roots x1=%d , x2=%d",Positive,Negative);
        }
        else if(judge<0){
            System.out.println("No real root");
        }
        else{
            System.out.printf("Two same roots x=%d",Positive);
        }
        scn.close();
    }
}
