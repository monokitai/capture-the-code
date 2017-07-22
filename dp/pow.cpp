
#include <iostream>

int pow(int x, int n){

  int *data = new int[n+1];

  if(n == 0){
    return 1;
  }

  data[1] = x;
  for(int i = 2; i <= n; i++){
    data[i] = x * data[i-1];
  }
  
  return data[n];
}

int main(int argc, char *argv[]){
  std::cout << pow(2,2) << std::endl;
  std::cout << powdp(10,10) << std::endl;
  return 0;
}

