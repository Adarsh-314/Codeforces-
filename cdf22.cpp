#include <iostream>

using namespace std;

void distinct(int n) {
    int a= 1;
    int b= 3;
    for(int i= 0; i<n; i++)
    {
        cout<<a*b<<" ";
        a+=2;
        b+=2;
    }
    cout<<"\n";
    
  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        distinct(n);
    }
    return 0;
}