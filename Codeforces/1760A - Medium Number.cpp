#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    vector<int> ordem(3);
    cin >> t;
    vector<int> resultado(t);
    for (int i = 0; i < t; i++)
    {
        cin >> ordem[0] >> ordem[1] >> ordem[2];
        sort(ordem.begin(), ordem.end());
        resultado[i] = ordem[1];
    }
    for (int i = 0; i < t; i++)
    {
        cout << resultado[i] << endl;
    }

    return 0;
}