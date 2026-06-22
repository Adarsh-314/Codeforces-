#include <iostream>
using namespace std;
bool isPrime(long long n) {
    if (n == 1) return false;            
    for (long long i=2; i*i<= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
      int cnt=0;
        
        long long a,b;
        cin>>a>>b;
        if ((a-b)==1 && isPrime(a+b)) {
             cout<<"YES\n";
        }
        else cout<<"NO\n";
        
    }
return 0;
}