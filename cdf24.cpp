#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        long long s,k,m;
        cin>>s>>k>>m;
        long long flip=m/k;
        long long t =m%k;
        if (flip==0) {
            s=s;
        }
        else {
            s=min(s,k);
        }
 
        long long rem= max (0LL,s-t);
        cout<<rem<<"\n";
       
    }
    return 0;
        
 
 
    }
