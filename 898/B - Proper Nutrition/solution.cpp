#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    int total_cost = 0;
    int x = 0;
    int y = 0;
 
    for (x = 0; x*a <= n; x++)
    {
        int remaining = n - x * a;
        if (remaining % b == 0) {
            y = remaining / b;
            cout << "YES" << endl;
            cout << x << " " << y << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
 
    return 0;
}