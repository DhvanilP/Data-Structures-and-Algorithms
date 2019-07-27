#include <bits/stdc++.h>
using namespace std;

bool myfun(vector<int> a, int i, int sum, int n) {
    if (sum < 0)
        return false;
    else if (i == n)
        return false;
    else if (sum == 0)
        return true;

    bool c1 = myfun(a, i + 1, sum - a[i], n);
    bool c2 = myfun(a, i + 1, sum, n);
    return c1 || c2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int sum;
        cin >> n >> sum;
        vector<int> a;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        cout << myfun(a, 0, sum, n);
    }
    return 0;
}
