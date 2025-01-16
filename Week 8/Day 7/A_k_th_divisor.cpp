//Problem_Name: k-th divisor
//Problem_Link: https://codeforces.com/problemset/problem/762/A

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
    ll n, k;
    cin >> n >> k;
    vector < ll > divisor;
    for (ll i = 1; i*i <= n; i++) {
        if (n%i == 0) {
            divisor.push_back(i);
            if (n/i != i) divisor.push_back(n/i);
        }
    }
    sort (divisor.begin(), divisor.end());
    // for (auto val : divisor) cout << val << " ";
    // cout << nl;
    if (divisor.size() >= k) cout << divisor[k-1];
    else cout << "-1";
}