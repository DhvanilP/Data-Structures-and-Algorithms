#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(20 * temp);
        }
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a[i] = a[i] - 10 * temp >= 0 ? a[i] - 10 * temp : 0;
        }
        cout<<*max_element(a.begin(),a.end())<<endl;
    }
    return 0;
}