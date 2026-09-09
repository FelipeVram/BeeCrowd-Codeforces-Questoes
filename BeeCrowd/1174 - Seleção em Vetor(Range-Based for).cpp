#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<double> A(100);

    for (auto &x : A)
    {
        cin >> x;
    }

    int i = 0;
    for (auto x : A)
    {
        if (x <= 10)
        {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << x << endl;
        }
        i++;
    }
    return 0;
}
