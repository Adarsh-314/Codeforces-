#include <iostream>
#include<algorithm>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        long long cost1=0;
        long long cost2=0;
 
        long long n,a,b;
        cin>>n>>a>>b;
         
            cost1=(((n/3)*b)+(n%3)*a);
            cost2=(n*a);
            long long cost3 = ((n + 2) / 3) * b;
 
 
            cout<<min({cost1,cost2,cost3})<<"
";
 
                 
 
    }
    
return 0;
}