#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, soma=0, moedas=0;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    int total = accumulate(a.begin(),a.end(),0);
    for (int i = 0; i < n; i++)
    {
        soma+=a[i];
        total-=a[i];
        moedas++;
    
        if(soma>total){
        break;
        }
    }
    cout << moedas << endl;
    return 0;
}