#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll mh = n / k;
        ll r = n % k;
        if (!r && (mh % k == 0)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}