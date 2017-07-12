

//
//https://www.hackerrank.com/challenges/coin-change
//

#include <assert.h>
#include <cstdio>
#include <iostream>
#include <algorithm>

//change(0, 0, ...) = 0
//change(0, ..., ...) = 0 ?

    int change(int n, int *c){

	int possibilities = 0;
	int *data = (int *)malloc(sizeof(n+1));
	
	for(int i = 1; i <= n; i++){
	  c[i] = std::min(c[i], c[)+1;
	}
	
	return c[n];
    }

    int main(int argc, char *argv[]){
	
	int n, m;
	int *c;
	scanf("%d %d", &n, &m);

	c = (int *)calloc(m, sizeof(int));

	assert(!(n < 1 || n > 250));
	assert(!(m < 1 || n > 50));
	
	for(int i = 0; i < m; i++){
	  scanf("%d", &c[i]);
	}
	
	std::cout << "Number of possible changes: " << change(n, c) << std::endl;
	
    }





