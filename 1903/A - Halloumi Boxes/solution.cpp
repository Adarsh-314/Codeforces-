#include <bits/stdc++.h>
using namespace std;
int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; 
    
    while (t--) {
    int n, k;
    cin >> n >> k;
        vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (k >= 2) {
        cout << "YES
";
    } 
    else {
        if (is_sorted(a.begin(), a.end())) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    }
    
    return 0;
}