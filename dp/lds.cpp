
//longest decreasing subsequence

#include <iostream>

int lds(int *c){
  int length = sizeof(c)/sizeof(int);
  int *data = new int(length+1);

  data[1] = 1;
  for(int i = 2; i <= length; i++){
    if(c[i-1] > c[i]){
      data[i] = data[i-1] + 1;
    }
    else{
      data[i] = 1;
    }
  }
  
  return data[length];
}

int main(int argc, char *argv[]){

  int example[10] = {4,294,1,34,242,4,3,2,1,24};
  std::cout << lds(example) << std::endl;
  return 0;
}







