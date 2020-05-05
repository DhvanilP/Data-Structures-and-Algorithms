#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        set<int> s;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
            s.insert(temp);
        }
        if (n == 1) {
            cout << "0" << endl;
            continue;
        }
        sort(a.begin(), a.end());
        int count = 1;
        int mcount = 0;
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i + 1] == a[i]) {
                count++;
            } else {
                if (count > mcount) {
                    mcount = count;
                }
                count = 1;
            }
        }
        int same = max(mcount, count);
        int dist = s.size() - 1;
        // cout << same << dist << endl;

        if (dist >= same) {
            cout << same << endl;
        } else if (same > dist + 1) {
            cout << dist + 1 << endl;
        } else {
            cout << dist << endl;
        }
    }
    return 0;
}