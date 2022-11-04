#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

  int T;
  cin >> T;

  while (T-- > 0)
  {
    int N;
    cin >> N;
    int A[N * 2];
    int B[N];

    // buat nandain kalau nilai dari Ai udah dipake (disusun)
    bool used[N * 2] = {false};
    bool hasOne = false;

    // looping ini sekalian buat ngisi B(cuma diisi kalau i < N) sama A(diisi i+1 [1,2,3,dst...])
    for (int i = 0; i < N * 2; i++)
    {
      
      if (i < N)
      {
        cin >> B[i];
        if (B[i] == 1)
        {
          hasOne = true;
        }

        
        // tandain semua yg dijadiin input buat B berarti udah kepake
        used[B[i] - 1] = true;
      }
      A[i] = i + 1;
    }
    // case kusus, kalau nilai pertama B itu nilai tertinggi, atau B gapunya 1, pasti invalid
    if (!hasOne)
    {
      cout << -1
           << "\n";
      continue;
    }

    // looping array B
    for (int i = 0; i < N; i++)
    {
      cout << B[i] << " "; // tampilin nilai B[i] dulu
      // cari yang jaraknya paling kecil, tapi nilainya paling besar (tak liat di soal kek gitu)
      int minDiff = INT_MAX;
      int minIndex = -1;
      for (int j = 0; j < N * 2; j++)
      {
        // kalau udah dipake, abaikan
        if (used[j])
          continue;

        int diff = abs(B[i] - A[j]);

        // nah ini, selain ngecek jaraknya lebih kecil,
        //  juga ngecek jika jaraknya sama tapi ternyata nilainya lebih besar, pake yang ini aja
        if (diff < minDiff || (diff == minDiff && A[j] > A[minIndex]))
        {
          minDiff = diff;
          minIndex = j;
        }
      }

      // dah, tampilin dan tandain biar nggak dipake lagi
      cout << A[minIndex] << " ";
      used[minIndex] = true;
    }

    cout << "\n";
  }

  return 0;
}