#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>valor(3);
    vector<int>copia(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> valor[i];
        copia[i]=valor[i];
    }
    sort(valor.begin(),valor.end());

    cout << valor[0] << endl << valor[1] << endl << valor [2] << endl << endl;
    cout << copia[0] << endl << copia[1] << endl << copia [2] << endl;

    return 0;
}