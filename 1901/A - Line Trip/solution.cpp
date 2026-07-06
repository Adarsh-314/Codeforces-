#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max_diff = 0;
    if (n == 1)
    {
        max_diff = max(v[0], 2*(x - v[0]));
        cout << max_diff << endl;
        return;
    }
    else
    {
        max_diff = v[0];
        for (int i = 1; i < n; i++)
        {
            max_diff = max(max_diff, v[i] - v[i - 1]);
        }
        max_diff = max(max_diff, 2*(x - v[n - 1]));
        cout << max_diff << endl;
    }
}    
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }