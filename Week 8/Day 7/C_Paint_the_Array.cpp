//Problem_Name: Paint the Array
//Problem_Link: https://codeforces.com/contest/1618/problem/C

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
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll gcd1 = v[0], gcd2 = v[1];
        for (ll i = 0; i < n; i += 2) {
            gcd1 = __gcd(gcd1,v[i]);
        }
        for (ll i = 1; i < n; i += 2) {
            gcd2 = __gcd(gcd2,v[i]);
        }

        ll flag1 = 1;
        for (ll i = 0; i < n; i += 2) {
            if (v[i] % gcd2 == 0) {
                flag1 = 0;
                break;
            }
        }
        if (flag1) cout << gcd2 << nl;
        else {
            ll flag2 = 1;
            for (ll i = 1; i < n; i += 2) {
                if (v[i] % gcd1 == 0) {
                    flag2 = 0;
                    break;
                }
            }
            if (flag2) cout << gcd1 << nl;
            else cout << 0 << nl;
        }
        
    }
}