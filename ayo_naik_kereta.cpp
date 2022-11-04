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

  ll N,K, C, P;
  ll max, biaya, jarak,sisa;
  ll a[100000], b[100000];

  cin >> N >> K >> C >> P;

  for (ll i = 1; i <= N; i++)
  {
    cin >> a[i];
  }
  for (ll i = 1; i <= N; i++)
  {
    cin >> b[i];
  }
  for (ll i = 1; i <= N; i++)
  {
    max = 0;
    sisa = K;
    for (ll j = 1; j <= N; j++)
    {
      biaya = a[i] + b[j] + pow(abs(i- j), P) * C;
      jarak = abs(i - j) + 1;
      if (biaya <= K)
      {
        if (jarak > max)
        {
          max = jarak;
          sisa = K - biaya;
        }
      }
    }
    cout << max << " " << sisa << endl;
  }
}