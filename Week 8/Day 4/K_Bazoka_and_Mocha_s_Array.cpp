//Problem_Name: Bazoka and Mocha's Array
//Problem_Link: https://codeforces.com/problemset/problem/1975/A

//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
        ll a[n];
        for (ll i = 0; i < n; i++) cin >> a[i];
        ll flag = 0, flag1 = 1;
        ll mn = a[0], mx = 0;
        for (ll i = 1; i < n; i++) {
            if (a[i] < a[i-1] && flag == 0) {
                flag = 1;
                mx = a[i];
                if (mx > mn) {
                    flag1 = 0;
                    break;
                }
            }
            else if (a[i] > a[i-1] && flag) {
                if (a[i] > mx) mx = a[i];
                if (mx > mn) {
                    flag1 = 0;
                    break;
                }
            }
            else if (a[i] < a[i-1] && flag == 1) {
                flag1 = 0;
                break;
            }
        }
        flag1 ? yes:no;
    }
}