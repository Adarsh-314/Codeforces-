#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++) {
    cin>>v[i];
}
sort(v.begin(), v.end());
int low=0;
int high =n-1;
while(low<=high) {
    int mid = low + (high-low)/2;
    if(mid+1==v[mid]) {
        low=mid+1;
    }
    else {
        high=mid-1;
    }
}
cout<<low+1;
return 0;
}
    