
//
//https://www.hackerrank.com/challenges/coin-change
//

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.ArrayList;


public class CoinChangeProblem {

    int change(int n, int m, ArrayList C){

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

	assert (n < 1 || n > 250) : "n must be a number between 1 and 250";
	assert (m < 1 || m > 50) : "m must be a number between 1 and 50";
	
	in = br.readLine();
	split = in.split(" ");

	ArrayList<String> al = new ArrayList<>();
	for(int i = 0; i < split.length; i++){
	    al.add(split[i]);
	}

	
	CoinChangeProblem ccp = new CoinChangeProblem();
	System.out.println("Number of possible changes: " + ccp.change(n, m, al));

        }
	catch(NumberFormatException e){
	    System.out.println(e.getMessage());
	}
        catch(IOException e){
	    System.out.println(e.getMessage());
        }
    }
    
}


