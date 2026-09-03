#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, diferenca = INT_MAX;
        cin >> n;
        vector<int> atletas(n);
        for (int j = 0; j < n; j++)
        {
            cin >> atletas[j];
        }
        sort(atletas.begin(), atletas.end());
        for (int k = 0; k < n; k++)
        {
            if (k == n - 1)
            {
                break;
            }
            else
            {
                if (atletas[k + 1] - atletas[k] < diferenca)
                {
                    diferenca = atletas[k + 1] - atletas[k];
                }
            }
        }
        cout << diferenca << endl;
    }
}