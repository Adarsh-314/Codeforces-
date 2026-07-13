#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<vector<int>> vec(n, vector<int>(2));
for(int i=0; i<n; i++) {
    for(int j=0; j<2; j++) {
        cin>>vec[i][j];
    }
}
 
for(int i=0; i<n; i++) {
    int sum=vec[i][0]+vec[i][1];
  for(int j=i+1; j<n; j++) {
    if(sum==vec[j][0]) {
        if(vec[i][0]==vec[j][0]+vec[j][1]) {
            cout<<"YES";
            return 0;
        }
 
    }
 
  }
}
cout<<"NO";
 
return 0;
}
    