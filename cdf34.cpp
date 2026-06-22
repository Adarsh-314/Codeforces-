#include <iostream>
using namespace std;
int main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
    string s;
    cin>>s;
    int uppercase=0;
    int lowercase=0;
   for (int i=0; i<s.size(); i++) {
    if (s[i]>=65 && s[i]<=90) {
       uppercase++;
    }
    if (s[i]>=97 && s[i]<=122) {
       lowercase++;
    }
    
}
if (uppercase>lowercase) {
    for (int i=0; i<s.size(); i++) {
        if(s[i]>=97 && s[i]<=122) {
            s[i]=s[i]-32;
        }
    }

}

else {
    for (int i=0; i<s.size(); i++) {
        if(s[i]>=65 && s[i]<=90) {
            s[i]=s[i]+32;
        }
    }
}
cout<<s;
return 0;
}