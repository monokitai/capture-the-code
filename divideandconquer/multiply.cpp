
#include <iostream>

int multiply(int a, int n){
  if(n == 1){
    return a;
  }
  else{
    int tmp = multiply(a, n/2);
    if(n % 2 == 0){
      return tmp + tmp;
    }
    else{
      return tmp + tmp + a;
    }
  }
}

int main(int argc, char *argv[]){
  std::cout << multiply(4,14) << std::endl;
  return 0;
}

