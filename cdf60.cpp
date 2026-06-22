#include <bits/stdc++.h>
using namespace std;
void solve () {
     int n;
        cin >> n;
        long long max_diff = 0;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (i > 0)
            {
                max_diff = max(max_diff, vec[i - 1] - vec[i]);
            }
        }
        if (max_diff == 0)
        {
            cout << "YES" << endl;
            return;
        }
        for (int i = 1; i < vec.size(); i++)
        {
            if (vec[i] < vec[i - 1])
            {

                vec[i] += max_diff;
                if (vec[i] < vec[i - 1])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        cout << "YES" << endl;

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