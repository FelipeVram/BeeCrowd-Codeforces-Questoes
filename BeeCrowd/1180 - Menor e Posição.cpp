#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, POSICAO;
    cin >> N;
    vector<int>X(N);
    vector<int>COPIA(N);
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
        COPIA[i]=X[i];
    }
    
    sort(X.begin(), X.end());

    for (int i = 0; i < N; i++)
    {
        if(X[0] == COPIA[i]){
            POSICAO = i;
        }
    }
    
    cout << "Menor valor: " << X[0] << endl;
    cout << "Posicao: "  << POSICAO <<endl;
}