#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        
        long long tax = 0;
        vector<long long> vec(n);
        
        for (long long &i : vec) {
             cin >> i;
             tax += (i / x) * y;             
        }
        
        long long max_aamount = 0;
        
        for (int i = 0; i < n; i++) {
            long long current_amount = vec[i] + tax - (vec[i] / x) * y;
            max_aamount = max(max_aamount, current_amount);
        }
        
        cout << max_aamount << "\n";
    }
    return 0;
}