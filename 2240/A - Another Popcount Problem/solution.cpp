#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
  
    long long n, k;
    cin >> n >> k;
    
    long long max_popcount = 0;
    long long bit = 1;
    
    while (n >= bit) {
        long long bit_taken = min(k, n / bit);
        max_popcount += bit_taken;
        n -= bit_taken * bit;
        bit *= 2;
    }
    
    cout << max_popcount<<endl;
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