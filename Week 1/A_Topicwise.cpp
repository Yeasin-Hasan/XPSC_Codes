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
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    vector < pair <int, int> > v(n);
    for (int i = 0; i < n ; i++) {
        int l, r;
        cin >> l >> r;
        v[i] = {l,r};
    }
    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        ans = ans + (v[i].second - v[i].first)*p1;
        int flag = v[i+1].first - v[i].second;
        if(flag <= t1) ans = ans + flag*p1;
        else {
            ans = ans+ t1*p1;
            int flag2 = flag - t1;
            if (flag2 <= t2) ans = ans + flag2*p2;
            else {
                ans = ans + t2*p2;
                int flag3 = flag2 - t2;
                ans = ans + flag3*p3;
            }
        }
    }
    if (n > 1) {
        ans = ans + (v[n-1].second - v[n-1].first)*p1;
        cout << ans;
    }
    else cout << (v[n-1].second - v[n-1].first)*p1;
}