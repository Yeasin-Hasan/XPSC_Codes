//Problem_Name: Petr and a Combination Lock
//Problem_Link: https://codeforces.com/problemset/problem/1097/B

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
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int flag = 0;
    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        for (int k = 0; k < n; k++) {
            if ((i >> k) & 1) {
                sum += a[k];
            }
            else sum -= a[k];
        }
        //cout << sum << nl;
        if (sum%360 == 0) {
            flag = 1;
            break;
        }
    }
    flag ? yes:no;
}