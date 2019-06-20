//
// Created by dhp on 23/6/18.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    float sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    float avg = sum * 1.0 / n;
    if (avg >= 4.5) {
        cout << "0" << endl;
        exit(0);
    }
    int count = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        float adder = 5 - a[i];
        sum = sum + adder;
        avg = sum / n;
        count++;
        if (avg >= 4.5) {
            cout << count << endl;
            exit(0);
        }
    }
    return 0;
}

