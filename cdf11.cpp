#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t,n;
    cin>>t;
    while (t--) {
    cin>>n;
    int count;
    int sum=0;
    int a[n];
   
        for(int i=0; i<n; i++){
            if (i%2!=0) {
              count++;

            }
        }
    if (count%2==0) cout <<"0\n";
    else {

    }

    }
return 0;
}