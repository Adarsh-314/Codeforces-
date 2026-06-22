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
        int cnt;
        for(int i=0; i<=n; i++) {
            if (i%5==i%3) {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}