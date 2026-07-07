#include <bits/stdc++.h>
using namespace std;
 
long long minCost(int k, int n, const vector<long long>& v) {
    vector<long long> vec(n);
    for(int i = 0; i < n; i++) {
        vec[i] = v[i] + (long long)(i + 1) * k; 
    }
    sort(vec.begin(), vec.end());
    
    long long total = 0;
    for(int i = 0; i < k; i++) {
        total += vec[i];
    }
    
    return total;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    long long s; 
    cin >> n >> s;
    
    vector<long long> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int low = 0, high = n;
    int ans_k = 0;
    long long ans_cost = 0;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        
        long long current_cost = minCost(mid, n, v);
        
        if(current_cost <= s) {
            ans_k = mid;
            ans_cost = current_cost;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    cout << ans_k << " " << ans_cost << "
";
    return 0;
}