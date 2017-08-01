import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Min_Abs_Diff {

    public static int minabs(int[] c){
        int diff = Math.abs(c[0] - c[1]);
        int tmp = 0;
        for(int i = 0; i < c.length-1; i++){
            for(int j = i+1; j < c.length; j++){
                tmp = Math.abs(c[i]-c[j]);
                if(tmp < diff){
                    diff = tmp;
                }
            }
        }
        return diff;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] c = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            c[a_i] = in.nextInt();
        }
        
        boolean array = true;
        for(int i = 0; i < n; i++){
            if(c[i] < -1000000000 || c[i] > 1000000000){
                array = false;
            }
        }
        if(n >= 2 && n <= 10000 && array){
            int result = minabs(c);
            System.out.println(result);
        }
    }
}




