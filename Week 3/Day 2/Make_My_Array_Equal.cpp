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
    int t;
    cin >> t;    
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort (a, a+n);
        int flag = 1;
        if (n == 1) yes;
        else if (n == 2) {
            if (a[0] == 0 || a[0] == a[1]) yes;
            else no;
        }
        else {
            for (int i = 0; i < n-1; i++) {
                if (a[i] == 0) continue;
                else if (a[i] != a[i+1]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) yes;
            else no;
        }
    }
}