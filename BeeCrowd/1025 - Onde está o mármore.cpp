#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q, caso = 1;
    while ((cin >> N >> Q && (N != 0 && Q != 0)))
    {
        vector<int> numeromarm(N);
        vector<int> achar(Q);
        for (int i = 0; i < N; i++)
        {
            cin >> numeromarm[i];
        }
        sort(numeromarm.begin(), numeromarm.end());

        cout << "CASE# " << caso++ << ":" << endl;
        for (int i = 0; i < Q; i++)
        {
            cin >> achar[i];

            int L = 0, R = N - 1, posicao = -1;
            while (L <= R)
            {
                int M = (L + R) / 2;
                if (numeromarm[M] == achar[i])
                {
                    posicao = M;
                    R = M - 1;
                }
                else if (numeromarm[M] < achar[i])
                {
                    L = M + 1;
                }
                else
                {
                    R = M - 1;
                }
            }
        if(posicao != -1){
            cout << achar[i] << " found at " << posicao + 1 << endl;
        }
        else{
            cout << achar[i] << " not found" << endl;
        }
        }
    }
    return 0;
}