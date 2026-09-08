#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,k;
        string campos;
        cin>>n>>k>>campos;
        int nhoj=0;
        for (int z = 0; z < n; z+=k)
        {
            bool tem_zero = false;
            for (int j = z; j < z+k; j++)
            {
                if(campos[j]=='0'){
                    tem_zero=true;
                    break;
                }
            }
            if(!tem_zero){
                nhoj++;;
            }
        }
        cout<<nhoj<<endl;
    }
    
}