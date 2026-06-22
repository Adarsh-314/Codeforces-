#include <iostream>
using namespace std;
int main() {
    int count=0;
    int n,i;
    cin>>n;
    int a[n];
    for (i=0; i<n; i++) {
        cin>>a[i];
    }
    for (i=0; i<n; i++) {
        if (a[i]==1) {
            count++;
           
        }
    }
    if (count>0) {
        cout<<"HARD";
    }
    else {
        cout<<"EASY";
    }
    return 0;
}   


