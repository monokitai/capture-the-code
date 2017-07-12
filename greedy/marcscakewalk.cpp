
#include <iostream>

long int cake(int *c){

  return 0;
}

int main(){
  int n;
  std::cin >> n;
  int *c = (int *)calloc(n, sizeof(int));
  for(int i = 0; i < n; i++){
    std::cin >> c[i];
  }
  
  
  
  std::cout << cake(c) << std::endl;
  
  return 0;
}



