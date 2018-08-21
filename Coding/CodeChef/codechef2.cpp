// https://www.codechef.com/COOK91/problems/CTHREE
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    int aa[100005];
    int ba[100005];
    while (t--)
    {
        ll n;
        int a, b, c;
        cin >> n >> a >> b >> c;

        int index = 0;
        int as, bs;

        for (int i = 1; i <= a; i++)
        {
            if (n % i == 0)
            {
                aa[index++] = i;
            }
        }
        as = index;
        index = 0;
        for (int i = 1; i <= b; i++)
        {
            if (n % i == 0)
            {
                ba[index++] = i;
            }
        }
        bs = index;
        int count = 0;
        // cout << as << " " << bs << " " << cs << endl;
        ll check = 0;
        for (int i = 0; i < as; i++)
        {
            for (int j = 0; j < bs; j++)
            {
                ll x = aa[i] *1LL* ba[j];//dontt forget the 1LL here
                ll y = (ll)(n / x);
                if (n % x == 0 && y <= c)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}