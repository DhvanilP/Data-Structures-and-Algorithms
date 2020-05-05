#include <bits/stdc++.h>
using namespace std;
#define MOD (1000 * 1000 * 1000 + 7)

int fun(long long int a, long long int b) {
    return a > b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long int> a;
        long long int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end(), fun);
    

        long long int ans = 0;
        for (long long int i = 0; a[i] > i; i++) {
            ans = (ans + a[i] - i) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
