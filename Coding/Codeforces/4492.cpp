//
// Created by dhp on 18/6/18.
//
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    int c = max(a, b);
    int d = min(a, b);
    if (d == 0)
        return c;
    return gcd(c % d, d);
}

int main() {
    int l, r, x, y;
    cin >> l >> r >> x >> y;
    long long int product = x * 1LL * y;
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (product % i == 0) {
            int something = product / i;
            if (something >= l && something <= r) {
                count++;
            }

        }
    }
    cout << count;


    return 0;
}
