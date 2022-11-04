#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int A,B,k,x;
int check(int x,int k){
  if (k == 1)
  {
    return abs(A*x + B);
  }else{
    return check(abs(A*x+B),k--);
  }
  
}

int main() {
  cin >> A >> B >> k >> x;
  cout << check(x,k)<< endl;
  
}