#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

#define MOD 1000000007
/*
   notes

*/

int main() {
  FAST
  
  string a;
  getline(cin,a);
  cout << a.size();

  for (int i = a.length(); i > 0; i--)
  {
    cout << a.at(i);
  }
  
  
  return 0;
}