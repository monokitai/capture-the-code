
#include <bits/stdc++.h>

using namespace std;

int candies(int n, vector <int> arr) {
  // Complete this function
}

bool checkCond(vector<int> arr, int n){
  bool lt = true;
  if(n > 10000 || arr[i] < 1){
    lt = false;
  }
  for(int i = 0; i < n; i++){
    if(arr[i] > 10000 || arr[i] < 1)
      }
  return lt;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int arr_i = 0; arr_i < n; arr_i++){
    cin >> arr[arr_i];
  }
  if(checkCond()){
    int result = candies(n, arr);
    cout << result << endl;
  }
  return 0;
}

