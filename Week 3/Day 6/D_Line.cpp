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
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1;
        for (ll i = 0; i < n; i++) {
            if (i < n/2) s2.push_back('R');
            else s2.push_back('L');
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            if (s1[i] == 'L') ans += i;
            else if (s1[i] == 'R') ans += (n-i-1);
        }
        vector < ll > v;
        map <ll, ll> m;
        //cout << ans << nl;
        for (ll i = 0; i < n;) {
            ll flag1 = 0, flag2 = 0, flag3 = 0;
            
            //if (n%2 == 1 && i == n/2 ) continue;
            if (m[i] == 0 && s1[i] != s2[i]) {
                flag1 = n-1-2*i;
                flag3 = 1;
                m[i]++;
                //cout << "ok1 ";
            }
            else if (m[n-1-i] == 0 && s1[n-1-i] != s2[n-1-i]) {
                flag2 = n-1-2*i;
                flag3 = 1;
                m[n-1-i]++;
                //cout << "ok2 ";
            }
            else i++;
            if(flag3) {
                ans += max(flag1,flag2);
                v.push_back(ans);
                //cout << flag1 << " " << flag2 << " " << ans << nl;
            }
        }
        for (int i = v.size(); i < n; i++) v.push_back(ans);
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << nl;
    }
}