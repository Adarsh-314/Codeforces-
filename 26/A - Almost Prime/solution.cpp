#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    
     vector<int>vec(n + 1, 0);
 
    for (int i = 2; i <= n; ++i) {
        
        if (vec[i] == 0) {
           
            for (int j = 2 * i; j <= n; j += i) {
                vec[j]++;
            }
        }
    }
 
    int total_Primes = 0;
    for (int i = 1; i <= n; ++i) {
      
        if (vec[i] == 2) {
            total_Primes++;
        }
    }
 
     cout << total_Primes <<endl;
 
    return 0;
}