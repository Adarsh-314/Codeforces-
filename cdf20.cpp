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
        if(n!=67) {
            cout<<n+1<<endl;
        }
        else if (n==67) {
            cout<<"67\n";
        }
      
    }
return 0;
}