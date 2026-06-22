#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>h(n);
    for (int i=0; i<n; i++) {
        cin>>h[i];
    }
    sort(h.begin(), h.end());
    cout<<((h[n-1]-h[0])+1)<<endl;

}
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while (t--) {

    solve ();
}
    
return 0;
}