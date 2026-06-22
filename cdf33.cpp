#include <iostream>
#include<vector>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int sum=0;
    vector<int>vec(n-1);
    int a,b;
     for(int i=0; i<n-1; i++) {
         cin>>vec[i];
     }
    

     cin>>a>>b;

     for (int i=a; i<b; i++) {
        sum += vec[i-1];
     }
     cout << sum << endl;
return 0;
}