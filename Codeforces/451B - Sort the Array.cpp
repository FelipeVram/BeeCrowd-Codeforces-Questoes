#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,L=0,R=0, resposta2 = 1, resposta1 = 1;;
    cin >> n;
    vector<int>a(n);
    vector<int>copia(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        copia[i]=a[i];
    }
    sort(a.begin(),a.end());
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] != copia[i]){;
            L=i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(a[i] != copia[i]){;
            R=i;
            break;
        }
    }
    reverse(copia.begin() + L, copia.begin() + R + 1);
    if(a==copia){
        resposta1=L+1;
        resposta2=R+1;
        cout << "yes" <<endl << resposta1 << " " << resposta2 << endl;
    }
    else{
        cout << "no";
    }
    
    return 0;
}