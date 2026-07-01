#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0), b(n, 0);
        set<int> aa, bb;
        for (auto &it : a)
        {
            cin >> it;
        }
        for (auto &it : b)
        {
            cin >> it;
        }
        for (int i = 0; i < n; i++)
        {
            aa.insert(a[i]);
            bb.insert(b[i]);
        }
        int n1 = aa.size();
        int n2 = bb.size();
        if (n1 == 1 && n2 == 1)
            cout << "no" << endl;
        else if (n1 == 2 && n2 == 2)
            cout << "yes" << endl;
        else if ((n1 >= 3 && n2 >= 1) || (n2 >= 3 && n1 >= 1))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}