#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, a;
    cin >> n >> m >> a;
    long long l = (n / a) + (n % a != 0); 
    long long w = (m / a) + (m % a != 0);
    cout << l* w << "\n";

    return 0;
}