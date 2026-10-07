#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
        int n,i,j;
        cin>>n;
        vector<int> vetor(n);
        int repetidos=0;
        for (int i = 0; i < n; i++)
        {
            cin>>vetor[i];
        }
        sort(vetor.begin(), vetor.end());

        for (int i = 0; i < n-1; i++)
        {
            if(vetor[i]==vetor[i+1]){
                repetidos++;
            }
        }
        if(repetidos%2!=0){
            repetidos++;
        }

        cout << n - repetidos << endl;
    }
    return 0;
}