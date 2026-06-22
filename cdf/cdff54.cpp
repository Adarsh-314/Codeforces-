#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while (t--) {
    int  n;
    set<int> s;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}
    
return 0;
}
