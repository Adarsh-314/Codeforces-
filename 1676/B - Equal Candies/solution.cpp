#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int min=0;
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++) {
        min+=v[i]-v[0];
       
    }
    cout<<min<<endl;
}
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--) {
solve ();
}
    
return 0;
}