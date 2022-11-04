#include <iostream>
using namespace std;

int n, a[75][75], b[75][75];

bool isIdentik()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] != b[i][j])
        return false;
    }
  }
  return true;
}
bool isHoriz(){
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (a[i][j] != b[n-i-1][j])
        return false;
  return true;
}

bool isLeftDiagonal(){
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (a[i][j] != b[n-i-1][n-j-1])
        return false;
  return true;
}

int main()
{
  scanf("%d%d", &n, &n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &a[i][j]);

  scanf("%d%d", &n, &n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &b[i][j]);

  if (isIdentik()) cout << "identik";
  if (isHoriz()) cout << "horisontal";
  if (isLeftDiagonal()) cout << "diagonal kiri bawah";
}