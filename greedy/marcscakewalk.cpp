
#include <iostream>
#include <cmath>

int cake(int *calories){

  int temp = 0;
  int numofelements = sizeof(calories)/sizeof(int);
  for(int i = 0; i < numofelements-1; i++){
    for(int j = 1; j < numofelements - i; j++){
      if(calories[j-1] < calories[j]){
	temp = calories[j-1];
	calories[j-1] = calories[j];
	calories[j] = temp;
      }
    }
  }
  
  int miles = 0;
  for(int i = 0; i < numofelements; i++){
    miles += calories[i] * std::pow(2, i);
  }
  
  return miles;
}

int main(){

  int n = 0;
  std::cin >> n;
  int calories[n];
  for(int i = 0; i < n; i++){
    std::cin >> calories[i];
  }
  
  bool array = true;
  for(int i = 0; i < n; i++){
    if(calories[i] < 1 || calories[i] > 1000){
      array = false;
    }
  }

  if(n >= 1 && n <= 40 && array){
    int result = cake(calories);
    std::cout << result << std::endl;
  }
  
  return 0;
}
