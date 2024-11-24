//Problem_Link: https://codeforces.com/problemset/problem/1914/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define mod 1000000007
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        for (int i = n; i > k; i--)
        {
            cout << i << " ";
        }
        cout << nl;
    }
}