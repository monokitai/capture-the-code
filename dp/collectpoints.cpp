
//maximize possible amount of points in assignments
//if you do assignment i you won't get any points in assignment i+1 and assignment i-1

#include <iostream>
#include <algorithm>

int points(int *p){
  
  int l = sizeof(p)/sizeof(p[0]); 
  int *data = new int[l+1];
  data[0] = 0;
  data[1] = p[1];
  for(int i = 0; i <= l; i++){
    data[i] = std::min(data[i-1], data[i-2] + p[i]);
  }
  return data[l];
}

int main(int argc, char *argv[]){

  int as[4] = {1,4,2,5};
  std::cout << points(as) << std::endl;
  
  return 0;
}
