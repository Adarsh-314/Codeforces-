#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while (t--) {
    long long a,b,n;
    cin>>a>>b>>n;
    if (n*b<=a || a==b) {
        cout<<"1"<<endl;
    }
    else   {
        cout<<"2"<<endl;
    }
 
   
}
return 0;
}