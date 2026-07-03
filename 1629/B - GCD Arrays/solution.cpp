#include <bits/stdc++.h>
using namespace std;
void solve() {
    int l,r,k;
    cin>>l>>r>>k;
    if (l==r && l==1) {
        cout<<"NO"<<endl;
        return;
    }
    else if (l==r) {
        cout<<"YES"<<endl;
        return;
    }
    
    int oddNumbers=((r-l+1)-((r/2) - ((l-1)/2)));
    if (oddNumbers>k) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
        
    
 
 
 
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