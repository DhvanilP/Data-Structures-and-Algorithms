#include<bits/stdc++.h>

using namespace std;

typedef struct {
    int pow;
    int coins;
    int index;
    long long int tot;
} king;

int fun(king a, king b) {
    return a.pow < b.pow;
}

int fun3(king a, king b) {
    return a.index < b.index;
}

int fun2(int a, int b) {
    return a > b;
}

int main() {
    int n, k;
    cin >> n >> k;
    king store[n];
    for (int i = 0; i < n; i++) {
        cin >> store[i].pow;
    }
    for (int i = 0; i < n; i++) {
        cin >> store[i].coins;
        store[i].index = i;
    }
    vector<int> temp;
    sort(store, store + n, fun);


    for (int i = 0; i < n; i++) {
        if (i == 0) {
            store[i].tot = store[i].coins;
            temp.push_back(store[i].coins);
            continue;
        }
        if (i <= k) {
            temp.push_back(store[i].coins);
            store[i].tot = store[i - 1].tot + store[i].coins;
            continue;
        }
        sort(temp.begin(),temp.end(),fun2);
        int smallest = temp.back();
        temp.pop_back();
        temp.push_back(store[i].coins);
        store[i].tot = store[i - 1].tot - smallest + store[i].coins;
    }
    sort(store, store + n, fun3);
    for (int i = 0; i < n; i++) {
        cout << store[i].tot << " ";
    }


    return 0;
}