#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    int c[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                c[i] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (c[i] == 1) {
            cout << a[i] << " ";
        }
    }
    return 0;
}