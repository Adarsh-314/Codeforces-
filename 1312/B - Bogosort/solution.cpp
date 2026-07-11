#include <bits/stdc++.h>
using namespace std;
long long powerf(long long n, long long k) {
    long long mod = 1e9 + 7;
    long long result = 1;
    n = n % mod;
    
    while (k > 0) {
        if (k % 2 == 1) {
            result = (result * n) % mod;
        }
        n = (n * n) % mod;
        k = k / 2; 
    }
    return result;
}
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
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