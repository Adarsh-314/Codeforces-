#include <bits/stdc++.h>
using namespace std;
void solve() {
    string w;
    cin>>w;
    int k=w.size();
    w.pop_back();
    w.pop_back();
    w.push_back('i');
    cout<<w<<endl;
    
}
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--) {
solve ();
}
    
return 0;
}