//
// Created by dhp on 18/6/18.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    while (n--) {
        int temp;
        cin >> temp;
        if(temp)
        s.insert(temp);
    }
    cout << s.size();
    return 0;
}