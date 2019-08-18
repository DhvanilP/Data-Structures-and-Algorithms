#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, l, r;
        cin >> n >> m >> k >> l >> r;

        int ci[n], pi[n];

        for (int i = 0; i < n; i++) {
            cin >> ci[i] >> pi[i];
        }

        for (int i = 0; i < n; i++) {
            if (ci[i] >= k + 1) {
                ci[i] = max(k, ci[i] - m);
            } else if (ci[i] <= k - 1) {
                ci[i] = min(k, ci[i] + m);
            }
        }

        int min = INT_MAX;

        for (int i = 0; i < n; i++) {
            if ((ci[i] >= l) && (ci[i] <= r)) {
                if (pi[i] < min) {
                    min = pi[i];
                }
            }
        }
        if (min == INT_MAX) {
            min = -1;
        }
        cout << min << endl;
    }
}