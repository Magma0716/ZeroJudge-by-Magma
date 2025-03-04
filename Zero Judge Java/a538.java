import java.util.Scanner;
public class a538{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        
        while(true){
            String input = scn.nextLine();

            int count=0; 
            if(input.equals("0")){
                break;
            }
            else{
                for(int i=0 ; i<input.length() ; i++){
                    count = (count*10 + (input.charAt(i)-'0'))%17;
                }
            }
            if(count==0){
                System.out.println(1);
            }
            else{
                System.out.println(0);
            }
        }  
        scn.close();  
    }
}
