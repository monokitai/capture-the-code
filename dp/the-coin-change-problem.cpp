

//
//https://www.hackerrank.com/challenges/coin-change
//

#include <cstdio>
#include <iostream>

//change(0, 0, ...) = 0
//change(0, ..., ...) = 0 ?

    int change(int n, int *C){

	int possibilities = 0;
	int *data[] = (int *)malloc(sizeof(n+1));
	
	data[0] = 0;
	for(int i = 1; i <= n; i++){
	  
	}
	
	return possibilities;
    }

    int main(int argc, char *argv[]){
	
	int n, m;
	int *C;
	scanf("%d %d", &n, &m);

	C = (int *)calloc(m, sizeof(int));

	assert(!(n < 1 || n > 250));
	assert(!(m < 1 || n > 50));
	
	for(int i = 0; i < m; i++){
	  scanf("%d", &C[i]);
	}
	
	std::cout << "Number of possible changes: " << change(n, m, C) << std::endl;
	
    }





