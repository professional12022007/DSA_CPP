#include <bits/stdc++.h>
using namespace std;
int sumof(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*sumof(n-1);
}
int main()
{
    int p;
    cin >> p;
    cout << sumof(p);
    return 0;
}
