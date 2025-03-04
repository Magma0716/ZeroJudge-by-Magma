import java.util.Scanner;
public class a009 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        
        String s = scn.nextLine();
        for(int i=0 ; i<s.length() ; i++){
            System.out.print((char)(s.charAt(i)-7));
        }
        scn.close();
    }
}