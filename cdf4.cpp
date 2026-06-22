#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x,y;
        cin>>n;
        cin>> x>>y;
        if(n% min(x, y)== 0) cout<< n/ min(x, y) << "\n";
        else cout<< n/ min(x, y)+ 1 << "\n";
    }
    return 0;
}