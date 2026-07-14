#include <bits/stdc++.h>
using namespace std;
void solve() {
int n;
cin>>n;
string s;
cin>>s;
int max_length=0;
int current_length=0;
for (char ch : s) {
        if (ch == '#') {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length = 0;
        }
    }
 
    
    if (max_length == 0) {
        cout << 0 << "
";
    } else {
        cout << (max_length + 1) / 2<<"
";
    }
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
    