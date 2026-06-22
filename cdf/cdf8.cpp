#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int cnt= 0;
       while(n%2==0) {
        n=n/2;
       }
       if (n==1) {
        cout<<"NO\n";
       }
       else cout<<"YES\n";
    }
return 0;
}