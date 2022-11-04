#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

#define MOD 1000000007

int main() {
  FAST

  int n,count;

  cin >> n;

  int a[n]; 
  bool isLoged[2000] = {false};
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0 )
    {
      isLoged[a[i]] =true
    }
    
  }
  cout << count;
  
  

  return 0;
}