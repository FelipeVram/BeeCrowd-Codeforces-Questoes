#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    bool possivel;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        possivel = true;
        int n;
        cin >> n;
        vector<int> vetor(n);
        for (int j = 0; j < n; j++)
        {
            cin >> vetor[j];
        }
        sort(vetor.begin(), vetor.end());

        for (int k = 0; k < n; k++)
        {
            if (n == 1 || k == n-1)
            {
                break;
            }
            else
            {
                if (vetor[k + 1] - vetor[k] > 1)
                {
                    possivel = false;
                    break;
                }
            }
        }
        if (possivel == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}