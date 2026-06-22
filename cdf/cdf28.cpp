#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if (n%3==0) {
            int p = n/3;
            if (p%2==0)
            {
                cout<<"0\n";
                return 0;
            }
            if(p%2!=0) {
                cout<<"3\n";
                return 0;
                 
            }
        }

       else if (n%2==0) {
          if(n%4==0) {cout<<"0\n"; return 0;}
          else {cout<<"2\n"; return 0; }

        }
        

    }
return 0;
}