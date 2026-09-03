#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t, n;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        long long doces_comidos=0;
        cin >> n;
        vector<int> vetor(n);
        for (int k = 0; k < n; k++)
        {
            cin >> vetor[k];
        }
        sort(vetor.begin(),vetor.end());
        
        for (int j = 0; j < n; j++)
        {  
            doces_comidos+=vetor[j]-vetor[0];
        }
        cout << doces_comidos << endl;
    }
    return 0;        
}
    