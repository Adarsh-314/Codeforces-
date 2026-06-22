#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int y,r;
        cin>>y>>r;
        if (r>=n) {
            cout<<n<<endl;
        }
        else if (y/2>=n) {
            cout<<n<<endl;
        }
        else if (r+y/2>=n){
            cout<<n<<endl;

        }
        else {
            cout<<r+y/2<<endl;
        }
    }
return 0;
}