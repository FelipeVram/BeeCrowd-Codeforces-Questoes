#include <bits/stdc++.h>
using namespace std;

int main(){
    int resposta;
    vector<int>x(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(),x.end());

    resposta= x[2]-x[0];
    cout << resposta << endl;
}