#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[20];
        p[0] = 1;
        for (int i = 1; i < 20; i++) {
            p[i] = 2 * (p[i - 1] + 1) - 1;
        }

        int n;
        cin >> n;
        vector<int> a, b, ans;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
            b.push_back(temp);
        }
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++) {
            int flag = 0;
            for (int j = 0; j < 20; j++) {
                if (binary_search(b.begin(), b.end(), p[j] - a[i])) {
                    ans.push_back(1);
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                ans.push_back(0);
            }
        }
        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}