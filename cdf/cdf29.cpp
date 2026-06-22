#include <iostream>
#include <vector>   
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for (int i=0; i<n; i++){
            cin>>v[i];
        }
        int max=v[0];
        for (int i=1; i<n; i++) {
            if (v[i]-v[i-1]>max) {
                max=v[i]-v[i-1];
            }
        }
        int chk=2*(x-v[n-1]);
        if (chk>max) {
            cout<<chk<<endl;
        }
        else {cout<<max<<endl;
        }
    }
return 0;
}