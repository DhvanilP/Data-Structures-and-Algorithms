#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<int> l, r;
        int lt, rt;
        for (int i = 0; i < q; i++) {
            cin >> lt >> rt;
            l.push_back(lt);
            r.push_back(rt);
        }

        vector<vector<int>> store;
        vector<int> temp(n, 0);
        for (int i = 0; i < 256; i++) {
            store.push_back(temp);
        }

        for (int i = 0; i < n; i++) {
            store[s[i]][i] = 1;
        }

        for (int i = 0; i < q; i++) {
            int start = l[i];
            int end = r[i];
            if (end - start >= 2) {
                int exit = 0;
                for (int j = start; j < end - 2; j++) {
                    for (int k = 0; k < 256; k++) {
                        int count = 0;
                        for (int x = j; x < j + 3; x++) {
                            if (store[k][x] == 1) {
                                count++;
                            }
                        }
                        if (count >= 2) {
                            cout << "YES\n";
                            exit = 1;
                            break;
                        }
                    }
                    if (exit) {
                        break;
                    }
                }
                if (!exit) {
                    cout << "NO\n";
                }
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
