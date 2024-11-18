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
        ll n, c;
        cin >> n >> c;
        ll a[n];
        vector <ll> v;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            v.push_back(a[i]+i+1);
        }
        sort (v.begin(), v.end());
        ll cnt = 0;
        ll sum = 0;
        
        for (ll i = 0; i < v.size(); i++) {
            if (v[i] + sum <= c) {
                sum += v[i];
                cnt++;
            }
            else break;
        }
        cout << cnt << nl;
    }
}