#include <bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    cin>>n;
    vector<long long>vec(n);
    vector<long long>ans;
    for (int i=0; i<n; i++) {
       cin>>vec[i];
    }
    long long flips=0;
    for(int i=n-1; i>=0; i--) {
        if(vec[i]>0) {
            flips++;
            

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