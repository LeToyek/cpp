#include <iostream>
using namespace std;

int gcd(int a,int b){
  if (b == 0){
    return a;
  }else{
    return gcd(b, a%b);
  }
}
int main(){
  int a,b;
  cin >> a >> b;
  int c = b;

  for (int i = 0; i < a-1; i++)
  {
    cin >> b;
    c *= b/gcd(c,b); 
  }
  cout << c;
  
  return 0;
}