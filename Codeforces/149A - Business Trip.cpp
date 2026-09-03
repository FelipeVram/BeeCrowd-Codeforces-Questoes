#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, ii = 12, somatorio=0, movimentos=0, soma_total=0;
    cin >> k;
    vector<int> vetor(ii);

    for (int i = 0; i < ii; i++)
    {
        cin >> vetor[i];
    }
    sort(vetor.begin(),vetor.end());
    soma_total=accumulate(vetor.begin(), vetor.end(), 0);

    if(soma_total < k){
        cout << "-1" << endl;
        return 0;
    }

    for (int i = 0; i < ii; i++)
    {
        
        if(somatorio<k){
            somatorio+=vetor[(ii-1)-i];
            movimentos++;
        }
        
        else{
            break;
        }
    }
    cout << movimentos << endl;
    return 0;
}