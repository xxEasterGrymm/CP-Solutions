import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        long[] arr = new long[5];
        long sumMax = 0, sumMin = 0, sum = 0;
        for(int i = 0; i < 5; i++) {
            arr[i] = sc.nextLong();
            sumMin = sumMin + arr[i];
        }
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(i != j) sum = sum + arr[j];
            }
            if(sum > sumMax) sumMax = sum;
            else if(sum < sumMin) sumMin = sum;
            sum = 0;
        }
        System.out.println(sumMin + " " + sumMax);
    }
}