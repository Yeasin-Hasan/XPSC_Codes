//Problem_Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    ll i = 0, j = 0, ans = INT_MAX, sum = 0;
    while (j < n) {
        sum += a[j];
        while (sum - a[i] >= s) {
            sum -= a[i]; 
            i++;
        }
        if (sum >= s) ans = min (ans, j-i+1);
        j++; 
    }
    if (ans == INT_MAX) cout << "-1";
    else cout << ans;
}