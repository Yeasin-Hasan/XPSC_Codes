//Problem_Name: Good Prefixes
//Problem_Link: https://codeforces.com/problemset/problem/1985/C

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

        vector < ll > hash(n+1);
        hash[0] = v[0];
        for (ll i = 1; i < n; i++) {
            hash[i] = hash[i-1] + v[i];
        }

        ll cnt;
        if (v[0] == 0) cnt = 1;
        else cnt = 0;
        ll mx = v[0];
        for (ll i = 1; i < n; i++) {
            if (v[i] > mx) mx = v[i];
            if (hash[i] == 2*mx) cnt++;
        }
        cout << cnt << nl;
    }
}