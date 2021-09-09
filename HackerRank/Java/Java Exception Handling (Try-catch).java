import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = a/b;
            System.out.println((int)c);
        }
        catch(ArithmeticException a) {
            System.out.println("java.lang.ArithmeticException: / by zero");
        }
        catch(InputMismatchException e) {
            System.out.println("java.util.InputMismatchException");
        }
    }
}