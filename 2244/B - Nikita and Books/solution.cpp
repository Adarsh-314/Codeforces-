#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    long long sum = 0;
    bool possible = true;
    
    for (long long i = 0; i < n; i++) {
        long long val;
        cin >> val;
        sum += val;
        
       
        long long min_sum = ((i + 1) * (i + 2)) / 2; 
        
       
        if (sum < min_sum) {
            possible = false;
        }
    }
    
   
    if (possible) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "
";
    }
    return 0;
}