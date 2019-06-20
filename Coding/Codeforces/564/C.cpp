#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t != 0)
            a.push_back(t);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        b.push_back(t);
    }
    make_heap(a.begin(), a.end()); 
    

    return 0;
}