#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    long long sum=0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    if (sum%2==0) {
        cout<<"0"<<endl;
        return;
    }
else {
    int min_ops = INT_MAX;
 
    for (int i = 0; i < n; i++) {
        int current_val = *(v.begin() + i);
        int original_parity = current_val % 2;
        int ops = 0;
        
      
        while ((current_val % 2) == original_parity) {
            current_val /= 2;
            ops++;
        }
        
       
        if (ops < min_ops) {
            min_ops = ops;
        }
    }
    cout << min_ops << endl;
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