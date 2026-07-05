#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n;
    cin >> n;
    int low = 1; 
    int high = 3 * n; 
    for (int i = 0; i < n; i++) 
    {
        
        cout << low << " " << high - 1 << " " << high << " ";
        
        
        low++;
        high -= 2;
    }
    cout << "
";
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