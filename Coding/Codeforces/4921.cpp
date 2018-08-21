//
// Created by dhp on 24/6/18.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int h = n / 100;
    n = n % 100;
    int t = n / 20;
    n = n % 20;
    int ten = n / 10;
    n = n % 10;
    int f = n / 5;
    n = n % 5;
    cout << h + t + ten + f + n;
    return 0;
}