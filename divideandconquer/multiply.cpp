
#include <iostream>

int multiply(int m, int n){
  if(n == 0){
    return 0;
  }
  else if(n == 1){
    return m;
  }
  else{
    int tmp = multiply(m, n/2);
    if(tmp % 2 == 0){
      
    }
  }
}

int main(int argc, char *argv[]){
  std::cout << multiply(4,2) << std::endl;
  return 0;
}
