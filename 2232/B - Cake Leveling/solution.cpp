#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    long long* a = new long long[n];
    for (int i = 0; i < n; ++i) {
        cin >> *(a + i);
    }
 
    long long current_sum = 0;
    long long current_min = 2e18;
 
    for (int i = 0; i < n; ++i) {
        current_sum += *(a + i);
        long long max_h = current_sum / (i + 1);
        if (max_h < current_min) {
            current_min = max_h;
        }
        
        cout << current_min << (i == n - 1 ? "" : " ");
    }
    cout << "
";
    delete[] a;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}