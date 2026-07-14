#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<vector<string>> v(n, vector<string>(8));
vector<pair<string, int>>ans;
for(int i=0; i<n; i++) {
    for(int j=0; j<8; j++) {
     cin>>v[i][j];
    }
}
for(int i=0; i<n; i++) {
    int score=0;
    string name= v[i][0];
    pair<string, int>a;
    a.first=name;
    score=100*stoi((v[i][1]));
    score-=50*stoi((v[i][2]));
    score+=stoi(v[i][3])+stoi(v[i][4])+stoi(v[i][5])+stoi(v[i][6])+stoi(v[i][7]);
    a.second=score;  
    ans.push_back(a);    
 
}
sort(ans.begin(), ans.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second; 
    });
cout<<ans[n-1].first;
return 0;
}
    