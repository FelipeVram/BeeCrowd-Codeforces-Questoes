#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    bool yes = true;
    cin >> s >> n;
    vector<pair<int, int>> dragoes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dragoes[i].first >> dragoes[i].second;
    }
    sort(dragoes.begin(), dragoes.end());

    for (int i = 0; i < n; i++)
    {
        if (s > dragoes[i].first)
        {
            s += dragoes[i].second;
            continue;
        }
        else
        {
            yes = false;
            break;
        }
    }

    if (yes == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}