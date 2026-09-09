#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> N(20);
    for (auto &x : N)
    {
        cin >> x;
    }

    int i = 0, fim = 19, inicio = 0, copia;

    while (inicio < fim)
    {
        copia = N[inicio];
        N[inicio] = N[fim];
        N[fim] = copia;
        inicio++;
        fim--;
    }

    for(auto x : N){
        cout<<"N["<<i<<"] = "<< x <<endl;
        i++;
    }
    return 0;
}