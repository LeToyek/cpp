#include <bits/stdc++.h>
#define ll long long int
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
using namespace std;

#define MOD 1000000007



int main()
{
  FAST ll n, m, x = 0, y = 0,tempp;
  cin >> n;
  vector<string> command;
  for (int i = 0; i < n; i++)
  {
    string a;
    cin >> a;
    int xx;
    cin >> xx;
    for (int j = 0; j < xx; j++)
    {
      command.push_back(a);
    }
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int idx;
    cin >> idx;
    string temp = command.at(idx-1);
    if (temp == "kanan")
    {
      x++;
    }else if (temp == "kiri")
    {
      x--;
    }else if(temp == "atas"){
      y++;
    }else{
      y--;
    }
  }
  cout << "(" << x << "," << y <<")";


  return 0;
}