#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    int menor_soma=0, soma_atual=0, indice_resposta=1;
    cin>>n>>k;
    vector<int> h(n);
    
    
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    

    for (int i = 0; i < k; i++)
    {
        soma_atual+=h[i];
        menor_soma=soma_atual;
    }
    

    for (int i = 1; i <= n-k; i++)
    {
        soma_atual= soma_atual-h[i-1]+h[i+k-1];
        if(soma_atual<menor_soma){
            menor_soma=soma_atual;
            indice_resposta=i+1;
        }
    }
    cout << indice_resposta << endl;
}