#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> distancia(4);
        int maior=0;
        
        for (int i = 0; i < 4; i++)
        {
            cin>>distancia[i];
        }
        for (int i = 1; i < 4; i++)
        {
            if(distancia[0]<distancia[i]){
                maior++;
            }
        }
        cout<<maior<<endl;
    }
    
}