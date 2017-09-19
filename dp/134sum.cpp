
//number of ways to write n as a sum of 1, 3 and 4

#include <iostream>


int ways(int n){

  int *w = new int[n+1];
  w[0] = w[1] = w[2] = 1;
  w[3] = 2;
  for(int i = 4; i <= n; i++){
    w[i] = w[i-4] + w[i-3] + w[i-1];
  }
  return w[n];
}

int main(){
  std::cout << ways(10) << std::endl;
  return 0;
}


