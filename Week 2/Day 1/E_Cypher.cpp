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
        vector <pair <int, string>> v;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            int a;
            string s;
            cin >> a >> s;
            v.push_back({a,s});
        }
        vector < int > ans;
        for (int i = 0; i < v.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < v[i].first; j++) {
                if (v[i].second[j] == 'D') cnt--;
                else cnt++;
            }
            int flag = a[i];
            if (cnt > 0) {
                flag = a[i] - cnt;
                if (flag < 0) flag = flag + 10;
            }
            else if (cnt < 0) {
                flag = a[i] + (cnt*(-1));
                if (flag > 9) flag = flag - 10;
            }
            ans.push_back(flag);
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
}