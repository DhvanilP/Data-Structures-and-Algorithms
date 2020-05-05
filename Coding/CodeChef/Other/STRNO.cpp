#include <bits/stdc++.h>
using namespace std;

int primeFactors(int n) {
    int count = 0;
    while (n % 2 == 0) {
        n = n / 2;
        count++;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            n = n / i;
            count++;
        }
    }

    if (n > 2) {
        count++;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin>>x>>k;


        int count = primeFactors(x);
        if (count >= k) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }

    }
    return 0;
}
