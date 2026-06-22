#include <bits/stdc++.h>
using namespace std;
 void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin>>b[i];
    }  
    
    for (int i=0; i<n; i++){
        if (a[i]>b[i] ) {
            swap(a[i],b[i]);
        }
        
    }
    long long max_a=a[0];
    for (int i=0; i<n; i++) {
        if (a[i]>max_a) {
            max_a=a[i];
        }
    }

    long long sum_b=0;

    for (int i=0; i<n; i++) {
        sum_b+=b[i];
    }
      cout<<sum_b+max_a<<endl;
    
}

int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
return 0;
}