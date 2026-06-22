#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;

    for(int i=0; i<n; i++) {
        if (vec[i]==0) cnt0++;
        else if(vec[i]==1) cnt1++;
        else if(vec[i]==2) cnt2++;
    }
    int max_steps=cnt0+min(cnt1, cnt2);
    
    if (cnt1>=cnt2) {
        cnt1=cnt1-cnt2;
        cnt2=0;
    }
    else {
        cnt2=cnt2-cnt1;
        cnt1=0;
    }
    max_steps=max_steps+cnt1/3;
    max_steps=max_steps+cnt2/3;
    cout<<max_steps<<endl;


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