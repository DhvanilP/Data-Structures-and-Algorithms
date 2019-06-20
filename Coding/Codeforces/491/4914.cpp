//
// Created by dhp on 23/6/18.
//

#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int somefun(int a[]) {
    int sum = 0;
    for (int i = 0; i < 10.; i++) {
        sum += a[i];
    }
    int den = 1;
    for (int i = 0; i < 10; i++) {
        if (a[i] != 0)
            den *= factorial(a[i]);
    }
    int ans = factorial(sum) / den;
    if (a[0] >= 1)
        a[0]--;
    int sum2 = 0;
    for (int i = 0; i < 10; i++) {
        sum2 += a[i];
    }
    if (a[0] <= 1)
        sum2--;
    den = 1;
    for (int i = 0; i < 10; i++) {
        if (a[i] != 0)
            den *= factorial(a[i]);
    }
    int ans2 = factorial(sum2) / den;


    return ans - ans2 * (a[0] + 1);
}

int main() {
    string n;
    cin >> n;
    int a[n.size()];
    for (int i = 0; i < n.length(); i++) {
        a[i] = n[i] - '0';
    }
    sort(a, a + n.length());
    int count[10];
    for (int i = 0; i < n.length(); i++) {
        count[a[i]]++;
    }

    int st = 0;
    int temp[10];
    for (int i = 0; i < 10; i++) {
        temp[i] = (count[i]);
    }
    for (int i = 0; i < 10; i++) {
        int j = 0;
        for (j = 0; j < count[i]; j++) {
            temp[i] = j;
        }
        st += somefun(temp);
        temp[i] = j;
    }
    cout << st;

    return 0;
}
