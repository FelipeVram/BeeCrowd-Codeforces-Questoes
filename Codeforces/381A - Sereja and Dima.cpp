#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> CARTA(n);
    int Sereja = 0;
    int Dima = 0;
    int esq = 0;
    int dir = n - 1;
    bool turno_sereja = true;

    for (int i = 0; i < n; i++)
    {
        cin >> CARTA[i];
    }

    while (esq <= dir)
    {
        if(turno_sereja==true){
            if(CARTA[esq]>CARTA[dir]){
            Sereja += CARTA[esq];
            esq++;
            turno_sereja=false;
            }
            else{
            Sereja += CARTA[dir];
            dir--;
            turno_sereja=false;
            }  
        }
        else{
            if(CARTA[esq]>CARTA[dir]){
            Dima += CARTA[esq];
            esq++;
            turno_sereja=true;
            }
            else{
            Dima += CARTA[dir];
            dir--;
            turno_sereja=true;
            }  
        }
    }
    cout << Sereja << " " << Dima << endl;
}