#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    vector<double> A(100);
    for (int i = 0; i < 100; i++)
    {
        cin >> A[i];
        if(A[i] <= 10){
            cout << "A[" << i << "]" << " = " << A[i] << endl;
        }
    }
}