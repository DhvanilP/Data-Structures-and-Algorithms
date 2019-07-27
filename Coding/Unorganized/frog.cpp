#include <bits/stdc++.h>
using namespace std;
int myfun(int n) {
    if (n == 0)
        return 1;
    else if (n < 0)
        return 0;
    int c1 = myfun(n - 1);
    int c2 = myfun(n - 2);
    int c3 = myfun(n - 3);
    return c1 + c2 + c3;
}
int myfun2(int n) {
    int a[n + 1] = {0};
    a[0] = 1;
    int x = 0, y = 0, z = 0;
    for (int i = 1; i <= n; i++) {
        if (i - 1 >= 0) {
            x = a[i - 1];
        }
        if (i - 2 >= 0) {
            y = a[i - 2];
        }
        if (i - 3 >= 0) {
            z = a[i - 3];
        }
        a[i] = x + y + z;
    }
    return a[n];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << myfun2(n);
    }
    return 0;
}