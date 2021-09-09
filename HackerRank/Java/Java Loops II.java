import java.util.*;
import java.io.*;

class Solution {
    public static void main(String []argh) {
        Scanner in = new Scanner(System.in);
        int q=in.nextInt();
        for(int i=0;i<q;i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            for(int j = 0; j < n; j++) {
                int sum = 0;
                for(int k = 0; k <= j; k++) sum = sum + (int)Math.pow(2, k) * b;
                System.out.print((a + sum) + " ");
            }
            System.out.println();
        }
        in.close();
    }
}