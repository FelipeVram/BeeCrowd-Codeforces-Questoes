#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    bool crescente;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        bool crescente=true;
        cin >> n;
        vector<int>vetor(n);

        for (int k = 0; k < n; k++)
        {
            cin >> vetor[k];
        }
        
        sort(vetor.begin(), vetor.end());
    
        for (int j = 0; j < n; j++)
        {
            if (n == 1 || j + 1 == n)
            {
                break;
            }
            else
            {
                if (vetor[j + 1] > vetor[j])
                {
                    crescente = true;
                }
                else if(vetor[j]==vetor[j+1])
                {
                    crescente = false;
                    break;
                }
                else{
                    crescente = false;
                    break;
                }
            }
        }
        if (crescente == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}