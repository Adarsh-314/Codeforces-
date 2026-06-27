#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        int b=1,c=0;
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        for (int i=0; i<n; i++) {
         
            if (a[i]==67) {
 
                c=a[i];
            }
        }
        if (b*c==67) cout<<"YES
";
        else cout<<"NO
";
 
    }
    
return 0;
}
 