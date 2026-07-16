#include <bits/stdc++.h>
using namespace std;
void solve() {
int n,c;
cin>>n>>c;
 
vector<int>a(n);
long long total_sum = 0;
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }
 
   
    long long base_score = total_sum - (long long)n * c;
 
    
    sort(a.begin(), a.end());
 
   
    int max_pairs = n / 2;
    for (int i = 0; i < max_pairs; ++i) {
     
        if (a[i] < c) {
            base_score += (c - a[i]);
        }
    }
 
    cout << base_score << "
";
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
    