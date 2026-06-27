#include <bits/stdc++.h>
using namespace std;
using str= string;
#define int long long
#define pb push_back
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int maxe= INT_MIN, mine= INT_MAX;
    for(int i= 0; i<n; i++)
    {
        cin>>v[i];
        maxe= max(maxe, v[i]);
        mine= min(mine, v[i]);
    }
    cout<< max((maxe+mine)/2- mine, maxe- (maxe+mine)/2);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout<<"
";
    }
    return 0;
}