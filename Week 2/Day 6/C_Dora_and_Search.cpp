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
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int l, r;
        int flag = 0;
        int mx = n, mn = 1;
        for (int i = 0,  j= n-1; i <= j;) {
            if (v[i] == mx) {
                i++;
                mx--;
            }
            else if (v[i] == mn) {
                i++;
                mn++;
            }
            else if (v[j] == mx) {
                j--;
                mx--;
            }
            else if (v[j] == mn) {
                j--;
                mn++;
            }
            else if(v[i] != mx && v[i] != mn && v[j] != mx && v[j] != mn) {
                flag = 1;
                l = i+1;
                r = j+1;
                break;
            }
        }
        if (flag) cout << l << " " << r << nl;
        else cout << "-1" << nl;
    }
}