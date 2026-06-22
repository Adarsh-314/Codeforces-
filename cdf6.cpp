#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        int rem = n%10;
        if (rem==4 && rem ==7) {
            cout<<"YES";
            break;
        }
        n=n/10;
    }
return 0;
}