#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,temp;
        cin >> n;
        vector<int> c,h;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            c.push_back(temp);
        }
        for (int i = 0; i < n; i++) {
            cin >> temp;
            h.push_back(temp);
        }
        vector<vector<int>> s;
        vector<int> temp0;

        for (int i = 0; i < n; i++) {
            temp0.clear();
            temp0.push_back(max(i - c[i], 0));
            temp0.push_back(min(i + c[i], n - 1));
            s.push_back(temp0);
        }
        int dp[n] = {0};
        int x,y;
        for (int i = 0; i < s.size(); i++) {
            x = s[i][0];
            y = s[i][1];
            dp[min(x, n - 1)]++;
            if (y + 1 <= n - 1)
                dp[y + 1]--;
        }
        for (int i = 1; i < n; i++) {
            dp[i] += dp[i - 1];
        }

        sort(dp, dp + n);
        sort(h.begin(), h.end());
        int flag = 0;
        for (int i = 0; i < h.size(); i++) {
            if (h[i] != dp[i]) {
                flag = 1;
                cout << "NO\n";
                break;
            }
        }
        if (!flag) {
            cout << "YES\n";
        }
    }
    return 0;
}