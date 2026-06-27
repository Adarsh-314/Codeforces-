#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        if (x==y && x%2!=0) cout<<"NO
";
        else if (x==y && x%2==0) cout<<"YES
";
        else if (x!=y && x%2!=0 && y%2!=0) cout<<"NO
";
        else cout<<"YES
";
        
 
    }
return 0;
}