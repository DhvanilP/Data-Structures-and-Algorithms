// 0
// 3
// 4
// 0

#include <bits/stdc++.h>
using namespace std;
int num(string a, string b) {
    int j = 0, i = 0, x = 0;
    while (j < b.size()) {
        if (b[i] == a[j]) {
            i++, j++;
            i = i % b.size();
        } else {
            j = 0;
            i = ++x;
            if(x==b.size()){
                return INT_MAX;
            }
        }
    }
    return i;
}

int findsum(vector<int> a) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if(a[i]==INT_MAX){
            return INT_MAX;
        }
        sum += a[i];
    }
    return sum;
}
int main() {
    cout<<num("1234","3344");
    int n;
    cin >> n;
    vector<string> s;
    string temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        s.push_back(temp);
    }
    vector<vector<int> > diff;
    for (int j = 0; j < n; j++) {
        vector<int>temp;
        for (int i = 0; i < n; i++) {
            temp.push_back(num(s[j], s[i]));
        }
        diff.push_back(temp);
    }
    int l = s[0].size();
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        ans =min(ans,findsum(diff[i]));
    }
    if(ans==INT_MAX){
        cout<<"-1"<<endl;
    }
    else
    cout<<ans<<endl;
}
