#include <iostream>
using namespace std;
bool isPrime(int n)
{
  int count = 0;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      if (count == 1)
      {
        return false;
      }else{
        count++;
      }
    }
    
  }
  return true;
}
int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (isPrime(x))
    {
      cout << "YA" << endl;
    }
    else
    {
      cout << "BUKAN" << endl;
    }
  }
  return 0;
}