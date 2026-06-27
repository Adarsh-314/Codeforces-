#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) {
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());
       int target;
    if (n % 2 == 0) {
       
        target = vec[n / 2 - 1]; 
    } else {
        
        target = vec[n / 2];     
    }
    
    
    int R = 0;
    int L = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] < target) {
            L++;
        } else if (vec[i] > target) {
            R++;
        }
        
    }
    
    cout << max(L, R) << "
";
}    
return 0;
}