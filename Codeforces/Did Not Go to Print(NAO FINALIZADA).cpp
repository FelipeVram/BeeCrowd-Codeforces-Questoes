#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        set<int> nao_imp;
        string memoria;
        vector<int> pilha;
        cin>>n>>memoria;
        for (int i = 1; i <= n; i++)
        {
            nao_imp.insert(i);
        }
        
        for (int i = 0; i < n; i++)
        {
            int doc_atual=i+1;

            if(memoria[i] == '1'){
                pilha.push_back(doc_atual);
            }

            else if(memoria[i] == '2'){
                if(!pilha.empty()){
                    
                }
            }
        }
        
    }
}
    