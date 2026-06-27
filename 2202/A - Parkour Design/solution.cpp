#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        long long x, y;
        cin >> x >> y;
        
        long long rem = x - 2*y;
        
        if(rem < 0 || rem % 3 != 0){
            cout << "NO
";
            continue;
        }
        
        long long S = rem / 3; 
        
        if(y >= 0){
            
            cout << "YES
";
        } else {
            long long b = S + 2*y;
            if(b >= 0){
                cout << "YES
";
            } else {
                cout << "NO
";
            }
        }
    }
    
    return 0;
}