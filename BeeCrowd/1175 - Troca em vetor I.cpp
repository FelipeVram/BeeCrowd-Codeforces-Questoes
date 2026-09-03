#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> N(20);

    for (int i = 0; i < 20; i++)
    {
        cin >> N[i];    
    }
    
    for (int i = 0; i <= 9; i++)
    {
        int intermediario=0;
            intermediario=N[i];
            N[i]=N[19-i];
            N[19-i]=intermediario;
    }
    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}