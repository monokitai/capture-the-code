
//
//https://www.hackerrank.com/challenges/coin-change
//

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.ArrayList;


public class CoinChangeProblem {

    int change(int n, int m, int[] C){

	int possibilities = 0;

  
	return possibilities;
    }

    public static void main(String[] args){

	try{

	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	String in = br.readLine();
	

	String[] split = in.split(" ");


	int n = Integer.parseInt(split[0]);
	int m = Integer.parseInt(split[1]);

	in = br.readLine();
	split = in.split(" ");

	ArrayList<String> al = new ArrayList<>();
	for(int i = 0; i < split.length; i++){
	    al.add(split[i]);
	}

        }
	catch(NumberFormatException e){
	    System.out.println(e.getMessage());
	}
        catch(IOException e){
	    System.out.println(e.getMessage());
        }
    }
    
}


