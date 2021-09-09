import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int len = s1.length();
                int x=sc.nextInt();
                System.out.print(s1);
                for(int j = 1; j <= 15-len; j++) System.out.print(" ");
                if(x < 100 && x >= 10) System.out.print("0");
                else if(x < 10) System.out.print("00");
                System.out.print(x);
                System.out.println();
                //Complete this line
            }
            System.out.println("================================");

    }
}