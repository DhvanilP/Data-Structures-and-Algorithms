// On a positive integer, you can perform any one of the following 3 steps.
// 1.) Subtract 1 from it. ( n = n - 1 )  ,
// 2.) If its divisible by 2, divide by 2. ( if n % 2 == 0 , then n = n / 2  )  ,
// 3.) If its divisible by 3, divide by 3. ( if n % 3 == 0 , then n = n / 3  ).
// Now the question is, given a positive integer n, find the minimum number of steps that takes n to 1

#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int fun(int n);
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n+1; i++)
        arr[i] = -1;
    arr[1]=0;
    cout << fun(n);
    return 0;
}
int fun(int n)
{
    if (n == 1)
        return 0;
    else if (arr[n] != -1)
        return arr[n];
    int choice2, choice3;
    choice2 = choice3 = INT_MAX;
    int choice1 = 1 + fun(n - 1);
    if (n % 2 == 0)
        choice2 = 1 + fun(n / 2);
    if (n % 3 == 0)
        choice3 = 1 + fun(n / 3);

    arr[n] = (min(choice1, min(choice2, choice3)));
    return arr[n];
}