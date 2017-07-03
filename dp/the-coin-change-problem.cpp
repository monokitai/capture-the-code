

//
//https://www.hackerrank.com/challenges/coin-change
//

#include <cstdio>
#include <iostream>

//change(0, 0, ...) = 0
//change(0, ..., ...) = 0 ?

    int change(int n, int m, int *C){

	int possibilities = 0;

  
	return possibilities;
    }

    int main(int argc, char *argv[]){
	
	int n, m;
	int *C;
	scanf("%d %d", &n, &m);

	C = (int *)calloc(m, sizeof(int));
	
	//assert (n < 1 || n > 250) : "n must be a number between 1 and 250"; -> Java assertions makes no sense

	assert(!(n < 1 || n > 250));
	assert(!(m < 1 || n > 50));
	
	for(int i = 0; i < m; i++){
	  scanf("%d", &C[i]);
	}
	
	std::cout << "Number of possible changes: " << change(n, m, C) << std::endl;
	
    }
    


