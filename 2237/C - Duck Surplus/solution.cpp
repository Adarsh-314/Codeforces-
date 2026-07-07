//Problem No. 2237C
#include <bits/stdc++.h>
using namespace std;
 
bool check(long long x, const vector<long long> &a)
{
    int n = a.size();
    int left = 0;
    while (left < n)
    {
        long long current_sum = a[left];
        int right = left + 1;
        
        while (right < n && current_sum > a[right])
        {
            current_sum += a[right];
            right++;
        }
        
        if (current_sum > x)
            return false;
            
        left = right;
    }
    return true;
}
 
void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    
    long long low = 0;
    long long high = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        high += v[i]; 
        low = max(low, v[i]); 
    }
    
    long long ans = high; 
    
    while (low <= high)
    {
        long long mid = low + (high - low) / 2; 
        
        if (check(mid, v))
        {
           ans = mid;
           high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }
    
    cout << ans << "
"; 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}