#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    set<int> s;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }
    if(s.size() > 2) {
        cout << "NO
";
        return; 
    } 
    if(s.size() == 1) {
        cout << "YES
";
        return;
    }
    int cnt1 = 0;
    int cnt2 = 0;
    int first_element = v[0]; 
    
    for(int i = 0; i < n; i++) {
        if(v[i] == first_element) {
            cnt1++;
        }
        else {
            cnt2++;
        }
    }
 
    if(abs(cnt1 - cnt2) <= 1) {
        cout << "YES
";
    }
    else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}