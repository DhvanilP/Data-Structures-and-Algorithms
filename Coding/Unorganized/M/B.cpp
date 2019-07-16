#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n;
    cin >> k >> n;
    vector<int> a;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        printf("v");
        a.push_back(temp);
    }
    int b[n] = {0};
    printf("a");

    for (int i = 1; i < n - 1; i++) {
        if ((a[i - 1] < a[i]) && (a[i] > a[i + 1])) {
            b[i] = 10;
        }
    }
    for (int i = 0; i < k; i++) {
        b[i] = 1;
    }
    printf(":");
    int count = 0;
    int tower = k;
    while (tower < n) {
        for (int i = tower; i >= 0; i--) {
            if (b[i] == 10) {
                tower = i;
                break;
            }
        }
        count++;
    }
    cout << count - 1 << endl;
    return 0;
}