#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
int main(){
  int n,x;
  cin >> n >> x;
  int arr[n],rangeArr[n];
  int s = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr,arr+s);

  for (int i = 0; i < n; i++)
  {
    rangeArr[i] = abs(x - arr[i]);
  }
  
  sort(rangeArr,rangeArr+s);
  for (int i = 0; i < n; i++)
  {
    if(rangeArr[0] == abs (x-arr[i])){
      cout << arr[i];
      break;
    }
  }
  
  
  
  
}