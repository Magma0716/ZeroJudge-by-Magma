import java.util.Scanner;
public class a004 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        while(scn.hasNext()){
            int n = scn.nextInt();
            if(n%4==0 && n%100!=0 || n%400==0){
                System.out.println("閏年");
            }
            else{
                System.out.println("平年");
            }
        }
        scn.close();
    }
}
