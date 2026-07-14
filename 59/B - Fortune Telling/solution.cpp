#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>v(n);
int total_sum=0;
for(int i=0; i<n; i++) {
    cin>>v[i];
    total_sum+=v[i];
}
if(total_sum%2!=0) {
    cout<<total_sum;
    return 0;
}
 
sort(v.begin(), v.end());
for(int i=0; i<n; i++) {
    if(v[i]%2!=0) {
        cout<<total_sum-v[i];
        return 0;
    }
}
 
cout<<"0";
 
return 0;
}
    