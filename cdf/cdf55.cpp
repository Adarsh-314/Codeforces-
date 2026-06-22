#include <iostream>

#include <vector>

#include <algorithm>

#include <math.h>

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
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        int diff = abs(vec[0] - vec[1]);
        for (int i = 0; i < n; i += 2)
        {
            if (abs(vec[i] - vec[i + 1]) >= diff)
            {
                diff = abs(vec[i] - vec[i + 1]);
            }
        }
        cout << diff << endl;
    }
    return 0;
}