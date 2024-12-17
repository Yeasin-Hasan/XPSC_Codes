//Problem_Name: Longest Strike
//Problem_Link: https://codeforces.com/problemset/problem/1676/f

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
        int n, k;
        cin >> n >> k;
        vector < ll > v(n);
        map < ll, ll > m;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }
        sort (v.begin(), v.end());
        
        vector < ll > ans ;
        for (auto val : m) {
            if (val.second >= k) ans.push_back(val.first);
        }

        if (ans.size() == 0) cout << "-1\n";
        else {
            ll first = ans[0], last = ans[0], cnt = 1;
            ll left = first, right = last, mx = 0;
            for (int i = 1; i < ans.size(); i++) {
                if (ans[i] == ans[i-1]+1) {
                    cnt++;
                    last = ans[i];
                    if (cnt > mx) {
                        mx = cnt;
                        left = first;
                        right = last;
                    }
                }
                else {
                    if (cnt > mx) {
                        mx = cnt;
                        left = first;
                        right = last;
                    }
                    cnt = 1;
                    first = ans[i];
                    last = ans[i];
                }
            }
            cout << left << " " << right << " " << nl;
        }
    }
}
