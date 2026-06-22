#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>vec(n);
        for (int i = 0; i < n; i++) {
            cin>>vec[i];
        }
       sort(vec.begin(), vec.end(), greater<int>());
bool possible = true;
        
     
        for (int i = 0; i < n - 1; i++) {
            if (vec[i] == vec[i + 1]) {
                possible = false;
                break; 
            }
        }
        
        if (!possible) {
            cout << -1 << "\n";
        } else {
          
            for (int i = 0; i < n; i++) {
                cout << vec[i] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}