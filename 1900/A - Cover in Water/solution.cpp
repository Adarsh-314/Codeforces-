#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int gap = 0;
    int cnt = 0;
 
    string s1="...";
    if(s.find(s1) != string::npos) {
        cout<<2<<endl;
        return;
    }
 
    for (char ch : s)
    {
        if (ch == '.')
        {
            gap++;
        }
        
    }
 
    cout <<gap<< "
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