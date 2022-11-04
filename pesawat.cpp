#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

#define MOD 1000000007


int main() {
  FAST
  int n,m;
  int count;
  cin >> n >>m;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] < a[i+1][j])
      {
        if (a[i][j+1] < a[i +1][j] )
        {
          count++;
        }
        
      }
      
    }
  }
  cout << count ;
  
  
  return 0;
}