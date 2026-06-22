#include <iostream>
using namespace std;
int main() {
    int add=0;
    int t;
    int n;
    int i;
    cin >> t;
    while (t--) {
        cin>>n;
        int a[n];
       for (i=0; i<n; i++) {
           cin>>a[i];
        }
        int minVal =a[0];
       for(i=1; i<n; i++){
          if (minVal>a[i]){
            minVal==a[i];
          }
       }
       for(i=0; i<n; i++) {
        add=add+(a[i]-minVal);
       }
       cout<<add<<"\n";

    } 
return 0;
}