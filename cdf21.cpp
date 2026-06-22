#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while (t--) {
    int max;
    int sum=0;

    int a[7];
    for (int i=0; i<7; i++) {
        cin>>a[i];

    }
    max = a[0];
    for (int i=0; i<7; i++) {
        if (max<= a[i]) {
            max=a[i];

        }
    }

for (int i=0; i<7; i++) {
    sum=sum+a[i];

}
sum=sum-max;
sum=sum*(-1);
sum=sum+max;
cout<<sum<<endl;



}
    
return 0;
}