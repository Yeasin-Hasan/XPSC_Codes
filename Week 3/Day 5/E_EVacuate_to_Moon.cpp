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
        ll n, m, h;
        cin >> n >> m >> h;
        vector <ll> a(n), b(m);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < m; i++) {
            ll x;
            cin >> x;
            b[i] = h*x;
        }
        sort (a.rbegin(), a.rend()); 
        sort (b.rbegin(), b.rend());
        ll ans = 0; 
        for (ll i = 0; i < min(n,m); i++) {
            ans = ans + min (a[i], b[i]); 
        }
        cout << ans << nl;
    }
}