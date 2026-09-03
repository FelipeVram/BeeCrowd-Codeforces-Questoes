#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vetor(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vetor[i]=a;
    }
    sort(vetor.begin(),vetor.end());

    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }
    
}