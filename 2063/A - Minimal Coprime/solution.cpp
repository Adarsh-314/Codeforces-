#include <bits/stdc++.h>
using namespace std;
void solve() {
    int l,r;
    cin>>l>>r;
    if(l==r && l!=1) {
        cout<<"0"<<endl;
        return;
    }
    else if(l==r && l==1) {
        cout<<"1"<<endl;
        return;
    }
    else {
        cout<<r-l<<endl;
        return;
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