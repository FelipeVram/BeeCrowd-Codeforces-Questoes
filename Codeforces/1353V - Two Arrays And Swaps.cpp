#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        vector<int> vetorA(n);
        vector<int> vetorB(n);
        for (int j = 0; j < n; j++)
        {
            cin >> vetorA[j];
        }
        for (int y = 0; y < n; y++)
        {
            cin >> vetorB[y];
        }

        sort(vetorA.begin(), vetorA.end());
        sort(vetorB.begin(), vetorB.end());

        for (int h = 0; h < k; h++)
        {
            if (vetorA[h] < vetorB[(n - 1) - h])
            {
                vetorA[h] = vetorB[(n - 1) - h];
            }
            else
            {
                break;
            }
        }
        int soma = accumulate(vetorA.begin(), vetorA.end(), 0);
        cout << soma << endl;
    }
}