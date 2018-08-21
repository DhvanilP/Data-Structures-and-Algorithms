//
// Created by dhp on 24/6/18.
//
#include<bits/stdc++.h>

using namespace std;
typedef struct {
    int a;
    int b;
    int c;
    int i;
} store;

int fun(store a, store b) {
    return a.b < b.b;
}

int main() {
    int n;
    cin >> n;
    store some[n];
    for (int i = 0; i < n; i++) {
        cin >> some[i].a;
        some[i].i = i;
    }
    for (int i = 0; i < n; i++) {
        some[i].b = some[i].a / n;
    }
    for (int i = 0; i < n; i++) {
        some[i].c = some[i].a % n;
    }
    sort(some, some + n, fun);
    for (int i = 0; i < n; i++) {
        if (some[i].c <= some[i].i) {
            cout << some[i].i + 1;
            break;
        }
    }

    return 0;
}
