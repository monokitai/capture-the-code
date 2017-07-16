
#include <iostream>

int fib(int n){

  int *x = new int[n+1];
  x[0] = x[1] = 1;
  for(int i = 2; i <= n; i++){
    x[i] = x[i-1] + x[i-2];
  }
  return x[n];

  
}

int main(int argc, char *argv[]){

  std::cout << fib(11) << std::endl;
  return 0;
}

