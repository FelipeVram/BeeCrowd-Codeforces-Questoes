#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string matriz[8];
        for (int i = 0; i < 8; i++)
        {
                cin >> matriz[i];
        }

        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (matriz[i][j] == '#' && matriz[i + 1][j - 1] == '#' && matriz[i - 1][j - 1] == '#' && matriz[i + 1][j + 1] == '#' && matriz[i+1] [j-1]=='#')
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    
                }
            }
        }
    }
}