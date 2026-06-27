#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    int sand;
 
    while(t--){
        long long s, k, m;
        cin >> s >> k >> m;
        long long flips=m/k;
        long long rem=m%k;
        if (flips%2==0){
          sand=s;
        }
        else{
            sand=min(s,k);
          
        }
        if (rem==0) {
          cout<<sand<<endl;
        }
        else {
          long long ans=max(0LL, sand-rem);
          cout<<ans<<endl;
        }
 
     
    }
 
    return 0;
}