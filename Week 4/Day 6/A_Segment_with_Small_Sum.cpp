//Problem_Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

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
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    ll i = 0, j = 0, ans = 0, sum = 0;
    while (j < n) {
        sum += a[j];
        if (sum <= s) ans = max (ans, j-i+1);
        else {
            sum -= a[i]; 
            i++;
            if (sum <= s) ans = max (ans, j-i+1);
        }
        j++;
    }
    cout << ans;
}