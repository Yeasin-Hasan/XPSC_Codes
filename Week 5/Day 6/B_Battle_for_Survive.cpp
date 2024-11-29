//Problem_Name: Battle for Survive
//Problem_Link: https://codeforces.com/problemset/problem/2013/B

//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    fast;
    int t;
    cin >> t;    
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) cin >> a[i];
        ll flag = a[n-2];
        for (ll i = 0; i < n-2; i++) flag -= a[i];
        ll ans = a[n-1] - flag;
        cout << ans << nl;
    }
}