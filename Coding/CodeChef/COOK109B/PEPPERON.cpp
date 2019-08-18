#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a;
        string temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        int store[n][2] = {0};

        for (int i = 0; i < n; i++) {
            int l = 0, r = 0;
            for (int j = 0; j < n / 2; j++) {
                if (a[i][j] == '1') {
                    l++;
                }
            }
            for (int j = n / 2; j < n; j++) {
                if (a[i][j] == '1') {
                    r++;
                }
            }

            store[i][0] = l;
            store[i][1] = r;
        }
        int p1 = 0, p2 = 0;
        for (int i = 0; i < n; i++) {
            p1 += store[i][0];
            p2 += store[i][1];
        }
        int diff = abs(p1 - p2);

        int t;
        for (int i = 0; i < n; i++) {
            t = abs((p1 + store[i][1] - store[i][0]) - (p2 + store[i][0] - store[i][1]));
            if (t < diff) {
                diff = t;
            }
        }
        cout << diff << endl;
    }
    return 0;
}