#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        string s;
        string t;
        cin>>s>>t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s==t) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
 
 
    }
return 0;
}