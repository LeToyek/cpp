#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

#define MOD 1000000007


int main() {
  FAST

  string a,b;
  cin >> a >> b;
  cout << a.substr(0,2) <<endl;
  for (int i = 0; i < a.length()-1; i++)
  {
    bool isSus = false;
    for (int j = 0; j < b.length()-1; j++)
    {
      if (a.substr(i,i+2) == b.substr(j,j+2))
      {
        isSus = true;
      }
    }
    cout << isSus;
    isSus ? cout << a.substr(i,i+1): cout << "";
  }
  
  return 0;
}