#include <bits/stdc++.h>
using namespace std;
 
 
bool isPrime(long long n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
 
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
 
    return true;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    
    int count_odd_primes = 0; 
    if (k == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
 
    int prev_prime = 2; 
   
    for (int i = 3; i <= n; i++)
    {
        if (isPrime(i))
        {
            int current_prime = i;
            
          
            int sum = prev_prime + current_prime + 1;
 
     
            if (sum <= n && isPrime(sum))
            {
                count_odd_primes++;
            }
            
          
            prev_prime = current_prime;
        }
        if (count_odd_primes >= k)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
 
    cout << "NO" << endl;
 
    return 0;
}