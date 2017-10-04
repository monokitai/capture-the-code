
#include <iostream>

//time: O(n)
//space: O(1)
int pow(int x, int n){

  if(n == 0){
    return 1;
  }
  else if(n % 2 == 0){
    return pow(x, n/2) * pow(x, n/2);
  }
  else{
    return x * pow(x, n/2) * pow(x, n/2);
  }
}

//time: O(logn)
int power(int x, int n){

  int temp;
  if(n == 0){
    return 1;
  }
  temp = power(x, n/2);
  if(n % 2 == 0){
    return temp * temp;
  }
  else{
    return x * temp * temp;
  }
}

//time: O(n)
int powdp(int x, int n){

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
  std::cout << pow(2,3) << std::endl;
  std::cout << power(3,3) << std::endl;
  std::cout << powdp(10,10) << std::endl;
  return 0;
}

