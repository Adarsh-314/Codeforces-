#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long x, y;
    cin >> x >> y;
        if (x == 0 || y == 0) {
        cout << "black
";
        return 0;
    }
    long long dist_sq = x * x + y * y;
    double d = sqrt(dist_sq);
    long long r = floor(d);
    if (r * r == dist_sq) {
        cout << "black
";
        return 0;
    }
    bool is_q1_or_q3 = (x * y > 0);
 
    if (r % 2 == 0) {
        cout << (is_q1_or_q3 ? "black
" : "white
");
    } else {
        cout << (is_q1_or_q3 ? "white
" : "black
");
    }
 
    return 0;
}