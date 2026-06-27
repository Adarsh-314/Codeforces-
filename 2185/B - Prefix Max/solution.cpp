#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++ ){
            cin>>a[i];
        }
        int max=a[0];
        for (int i=0; i<n; i++) {
          if (a[i]>=max) {
            max=a[i];
           
          }  
        }
        cout<<max*n<<endl;
 
    }
return 0;
}