#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    string ch = "abcdefghijklmnopqrstuvwxyz";
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string temp = "";
        for (int i = 0; i < b; i++) {
            temp = temp + ch[i];
        }
        int x = n / b;
        int y = n % b;
        string ans = "";
        for (int i = 0; i < x; i++) {
            ans += temp;
        }
        for (int i = 0; i < y; i++) {
            ans += ch[i];
        }
        cout << ans << endl;
    }
    return 0;
}