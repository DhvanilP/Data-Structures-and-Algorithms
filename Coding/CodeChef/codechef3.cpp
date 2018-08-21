// // https: //www.codechef.com/COOK91/problems/CARRAY

#include <bits/stdc++.h>
using namespace std;

struct data
{
    long long int a, b;
};

bool comp(data s1, data s2)
{
    return (s1.a < s2.a);
}
int main(void)
{
    long long int t, i, n, k, b, j, max, k1;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> k1 >> b;
        data arr[n];
        long long int dp[n];
        for (j = 0; j < n; j++)
        {
            cin >> arr[j].a;
            arr[j].b = arr[j].a * k1 + b;
        }
        sort(arr, arr + n, comp);
        fill_n(dp, n, 1);

        /*for(j=0;j<n;j++)
      cout<<dp[j]<<" ";*/
        max = 1;

        /*for(j=0;j<n;j++)
      cout<<arr[j].a<<" "<<arr[j].b<<endl;*/

        for (j = n - 2; j >= 0; j--)
        {
            for (k = j + 1; k < n; k++)
            {
                if (arr[j].b <= arr[k].a)
                {
                    dp[j] += dp[k];
                    break;
                }
            }
            if (max < dp[j])
                max = dp[j];
        }

        cout << max << endl;
        cout << "dp:";
        for (int i = 0; i < n; i++)
            cout << dp[i] << " ";
    }
    return 0;
}