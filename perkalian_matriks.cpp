#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

#define MOD 1000000007

int main() {
  FAST

  int n,m,p;
  cin >> n >> m >> p;
  int a[n][m];
  int b[m][p];
  int c[n][p];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
    
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < p; j++)
    {
      cin >> b[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      c[i][j]= 0;
    }
    
  }
  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      for (int k = 0; k < m; k++)
      {
        c[i][j] += a[i][k] * b[k][j];
      }
      
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      cout << c[i][j] << " ";
      if (j == p-1)
      {
        cout << endl;
      }
    }
    
  }
  
  
  
  

  return 0;
}