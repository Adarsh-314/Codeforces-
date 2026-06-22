#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int a,b,i1,i2,j1,j2;
        int sumw=0,sumb=0;
        cin>>a,b;
        int a1=a;
        int b1=b;
        for (i1=1; sumw<=a; i1+=2) {
            sumw=sumw+i1;
            a=a-sumw;

        }
        for (j1=2; sumb<=b; j1+=2) {
            sumb+=j1;
            b=b-sumb;
        }
        sumw=0,sumb=0;

          for (i2=2; sumw<=a1; i2+=2) {
            sumw=sumw+i2;
            a1=a1-sumw;

        }
        for (j2=1; sumb<=b1; j2+=2) {
            sumb+=j2;
            b1=b1-sumw;
        }
        cout<<max(min(i1,j1),min(i2,j2))<<endl;
        
        

    }
return 0;
}