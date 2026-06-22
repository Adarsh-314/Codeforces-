#include <iostream>
#include <vector>
#include <algorithm>

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

        long long deletions = 0;
        int i = 0;
        while (i < n)
        {
            int current_val = vec[i];
            int count = 0;
            while (i < n && vec[i] == current_val) 
            {
                count++;
                i++;
            }
            if (current_val == 0)
            {
                deletions += count;
            }
            else if (count < current_val)
            {
                deletions += count;
            }
            else
            {
                deletions += (count - current_val);
            }
        }
        
        cout << deletions << "\n";
    }
    return 0;
}
// void solve()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> vec(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> vec[i];
//         }
//         sort(vec.begin(), vec.end());

//         long long deletions = 0;
//         int i = 0;
//         while (i < n)
//         {
//             int current_val = vec[i];
//             int count = 0;
//             while (i < n && vec[i] == current_val)
//             {
//                 count++;
//                 i++;
//             }
//             if (current_val == 0)
//             {
//                 deletions += count;
//             }
//             else if (count < current_val)
//             {
//                 deletions += count;
//             }
//             else
//             {
//                 deletions += (count - current_val);
//             }
//         }

//         cout << deletions << "\n";
//     }
// }