#include <iostream>

#define ll long long
#define lli ll int
#define llf ll float

using namespace std;

lli gcd(lli a,lli b){
  if (b == 0)
  {
    return a;
  }else{
    return gcd(b,a%b);
  }
  
}
int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  int penyebut = b*d;
  int pembilang = (a*d) + (c*b);

  lli e ;
  if (pembilang > penyebut){
    e = gcd(pembilang,penyebut);
  }else{
    e = gcd(penyebut,pembilang);
  }
  
  
  cout << pembilang/e << " " << penyebut/e;
  return 0;
}
