#include <bits/stdc++.h>
using namespace std;

int somefun(vector<int> a, int i, int j) {
    if (j - i == 1) {
        return max(a[i], a[j]);
    }
    int c1 = a[i] + min(somefun(a, i + 2, j), somefun(a, i + 1, j - 1));
    int c2 = a[j] + min(somefun(a, i + 1, j - 1), somefun(a, i, j - 2));
    return max(c1, c2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, temp;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        cout<<somefun(a,0,n-1)<<endl;
    }
}