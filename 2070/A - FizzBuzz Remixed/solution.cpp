#include<iostream>
using namespace std;
 
int main () {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int rem[15] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = (n / 15) * 3 + rem[n % 15];
        
        cout << cnt << "
";
    }
    return 0;
}