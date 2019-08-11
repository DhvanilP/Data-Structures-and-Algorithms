#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, temp;
        ll count = 0;
        cin >> n;
        vector<ll> a, x;
        for (ll i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        x.push_back(0);
        for (ll i = 0; i < n; i++) {
            x.push_back(a[i] ^ x[i]);
        }
        unordered_map<ll, vector<ll>> store;
        for (ll i = 0; i <= n; i++) {
            store[x[i]].push_back(i);
        }
        ll s;
        for (auto v : store) {
            s = v.second.size();
            for (ll i = s - 1; i >= 0; i--) {
                count += i * 1LL * v.second[i] - (s - 1 - i) * 1LL * v.second[i];
            }
            count -= (s * (s - 1) / 2);
        }
        cout << count << endl;
    }
    return 0;
}