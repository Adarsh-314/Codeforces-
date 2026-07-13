#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 1 << "
";
        return;
    }
    if (n == 2) {
        cout << -1 << "
";
        return;
    }
    long long* arr = new long long[n];
    *arr = 1;
    *(arr + 1) = 2;
    *(arr + 2) = 3;
    
    long long current_sum = 6;
    for (int i = 3; i < n; i++) {
        *(arr + i) = current_sum;
        current_sum *= 2;
    }
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << (i == n - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}