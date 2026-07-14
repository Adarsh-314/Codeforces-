//Problem no. 26B
#include <bits/stdc++.h>
using namespace std;
 
int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    if (cin >> s) {
        int left_bracket = 0;
        int pair_found = 0;
        
       
        for (char c : s) {
            if (c == '(') {
              
                left_bracket++;
            } else if (c == ')') {
        
                if (left_bracket > 0) {
                   
                    left_bracket--;
                    pair_found++;
                }
            }
        }
        cout << pair_found * 2 << "
";
    }
    
    return 0;
}