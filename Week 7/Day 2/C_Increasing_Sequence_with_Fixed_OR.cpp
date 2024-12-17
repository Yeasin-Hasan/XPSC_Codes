//Problem_Name: Increasing Sequence with Fixed OR
//Problem_Link: https://codeforces.com/problemset/problem/1988/C

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
        vector < ll > v;
        v.push_back(n);
        for (ll i = 0; i <= __lg(n); i++) {
            if ((n >> i) & 1) {
                ll value = n-(1ll << i);
                if (value > 0) {
                    v.push_back(value);
                }
            }
        }
        sort(v.begin(), v.end());
        cout << v.size() << nl;
        for (auto val:v) cout << val << " ";
        cout << nl;
    }
}