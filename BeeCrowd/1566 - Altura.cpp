#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int NC, N;
    cin >> NC;
    for (int i = 0; i < NC; i++)
    {
        cin >> N;
        vector<int> AltPessoas(N);
        for (int j = 0; j < N; j++)
        {
            cin >> AltPessoas[j];
        }
        sort(AltPessoas.begin(), AltPessoas.end());
        for (int k = 0; k < N; k++)
        {
            if (k == 0)
            {
                cout << AltPessoas[k];
            }

            else
            {
                cout << " " << AltPessoas[k];
            }
        }
        cout << endl;
    }
}