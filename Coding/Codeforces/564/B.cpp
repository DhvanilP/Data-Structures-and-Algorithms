#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = (n + 2) / 2;
    cout << x << endl;
    int flag = 0;
    int a[x][x] = {1};

    for (int i = x - 1; i >= 0; i--)
    {
        a[x - 1][i] = n--;
    }
    for (int i = x - 2; i >= 1; i--)
    {
        a[i][0] = n--;
    }
    int count = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (a[i][j] == count)
            {
                count++;
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}