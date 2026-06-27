#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 2) {
            cout << "2
";
        } else if (n == 3) {
            cout << "3
";
        } else if (n % 2 == 0) {
            cout << "0
";
        } else {
            cout << "1
";
        }
    }
    
    return 0;
}