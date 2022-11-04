#include <bits/stdc++.h>
#define ll long long int
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
using namespace std;

#define MOD 1000000007
int main()
{
  FAST

      int n,
      max = 0, numMod, count;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    count = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count > max)
    {
      if (arr[i] > numMod)
      {
        max = count;
        numMod = arr[i];
      }
    }
  }
  cout << numMod;
}