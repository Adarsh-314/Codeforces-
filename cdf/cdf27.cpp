#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
        
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }
        
        int diff = s - sum;
        
        if (diff < 0) {
            cout << "NO\n";
        } else if (diff % x == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}