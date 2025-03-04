import java.util.Scanner;
public class a005 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        for(int i=0 ; i<n ; i++){
            int a = scn.nextInt();
            int b = scn.nextInt();
            int c = scn.nextInt();
            int d = scn.nextInt();
            if(b-a==c-b){
                System.out.printf("%d %d %d %d %d\n",a,b,c,d,d+b-a);
            }
            else{
                System.out.printf("%d %d %d %d %d\n",a,b,c,d,d*b/a);
            }
        }
        scn.close();
    }
}
