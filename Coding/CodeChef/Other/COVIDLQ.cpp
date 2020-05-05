#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (temp == 1) {
                b.push_back(i);
            }
        }
        int flag = 0;
        for (int i = 0; i < b.size() - 1; i++) {
            if (b[i + 1] - b[i] < 6) {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
