#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
             long long R0, X, D, n;
    cin >> R0 >> X >> D >> n;
    
    string s;
    cin >> s;
    
    long long current_rating = R0;
    int rated_rounds = 0;
    
    for (char round_type : s) {
        if (round_type == '1') {
            rated_rounds++;
            current_rating = max(0LL, current_rating - D);
        } else if (round_type == '2') {
            if (current_rating < X) {
                rated_rounds++;
                current_rating = max(0LL, current_rating - D);
            }
        }
    }
    
    cout << rated_rounds << "\n";
        }
    }
    
    return 0;
}