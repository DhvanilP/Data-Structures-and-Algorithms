// https: //www.codechef.com/COOK91/problems/CCOOK
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
                count++;
        }
        switch (count)
        {
        case 0:
            cout << "Beginner\n";
            break;
        case 1:
            cout << "Junior Developer\n";
            break;
        case 2:
            cout << "Middle Developer\n";
            break;
        case 3:
            cout << "Senior Developer\n";
            break;
        case 4:
            cout << "Hacker\n";
            break;
        case 5:
            cout << "Jeff Dean\n";
            break;  
        }
    }
    return 0;
}