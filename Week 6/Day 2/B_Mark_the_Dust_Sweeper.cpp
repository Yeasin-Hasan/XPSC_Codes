//Problem_Name: Mark the Dust Sweeper
//Problem_Link: https://codeforces.com/problemset/problem/1705/B

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
        vector < ll > v(n);
        for (ll i = 0; i < n; i++) cin >> v[i];
        ll ind = -1;
        for (ll i = 0; i < n; i++) {
            if (v[i] != 0) {
                ind = i;
                break;
            }
        }
        if (ind != -1) {
            ll sum = 0, cnt0 = 0;
            for (ll i = ind; i < n-1; i++) {
                sum += v[i];
                if (v[i] == 0) cnt0++;
            }
            ll ans = sum + cnt0;
            cout << ans << nl;
        }
        else cout << "0\n";
    }
}