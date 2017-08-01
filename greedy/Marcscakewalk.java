import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Marcscakewalk {
    
    public static int minmiles(int[] calories){

        int miles = 0;
        for (int i = 0; i < calories.length - 1; i++) {
            for (int j = 1; j < calories.length - i; j++) {
                if (calories[j - 1] < calories[j]) {
                    int temp = calories[j - 1];
                    calories[j - 1] = calories[j];
                    calories[j] = temp;
                }
            }
        }

        for(int i = 0; i < calories.length; i++){
            miles = miles + (int)(calories[i] * Math.pow(2, i));
        }

        return miles;
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); //number of cupcakes
        int[] calories = new int[n];
        for(int i = 0; i < n; i++){
            calories[i] = sc.nextInt();
        }
        boolean array = true;
        for(int i = 0; i < n; i++){
            if(calories[i] < 1 || calories[i] > 1000){
                array = false;
            }
        }
        if(n >= 1 && n <= 40 && array){
            int result = minmiles(calories);
            System.out.println(result);
        }
    }
}
