#include <iostream>
using namespace std;
void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long current_sum = 0;
        for (int i = 0; i < n - 1; ++i) {
            int a;
            cin >> a;
            current_sum += a;
        }
        cout << -current_sum << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}