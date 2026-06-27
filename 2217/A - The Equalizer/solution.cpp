#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    int k;
    cin>>n>>k;
    vector<int>vec(n);
    long long sum=0;
    for (int i=0; i<n; i++) {
      cin>>vec[i];
      sum+=vec[i];
    }
    if (sum%2!=0) {
        cout<<"YES"<<endl;
    }
    else {
        if (n*k%2==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
 
 
}
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--) {
    solve();
 
}
    
return 0;
}