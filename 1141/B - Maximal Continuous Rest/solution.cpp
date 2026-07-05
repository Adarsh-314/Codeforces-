#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    int max_count = 0;
    int current_count = 0;
    
   
    for (int i = 0; i < 2 * n; i++)
    {
        if (a[i % n] == 1) 
        {
            current_count++;
            max_count = max(max_count, current_count);
        }
        else
        {
            current_count = 0;
        }
    }
    
    cout << max_count << "
";
 
    return 0;
}