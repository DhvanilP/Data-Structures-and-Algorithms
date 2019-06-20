//
// Created by dhp on 18/6/18.
//
#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

long long int power(long long int x, long long int y) {
    long long int temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp % MOD;
    else
        return ((x * temp) % MOD * temp) % MOD;
}

int main() {
    long long int x, k;
    cin >> x >> k;
    x = x % MOD;
    k = k % MOD;

    long long int pow4 = power(4, k);
    long long int ans = pow4 * 1LL * x % MOD;

    long long int n = power(2, k) % MOD;
    n = n - 1;
    long long int ans2;
    if (n % 2 == 0) {
        ans2 = (n / 2) * (n + 1) % MOD;
    } else {
        ans2 = ((n + 1) / 2) * n % MOD;
    }
    long long int temp = power(2, k);
    long long int q = ((((ans - ans2) * 2) % MOD) * power(temp, MOD - 2)) % MOD;
    if (q < 0) {
        q = q + MOD;
    }
    cout << q;

    return 0;
}