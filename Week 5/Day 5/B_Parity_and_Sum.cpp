//Problem_Link: https://codeforces.com/problemset/problem/1993/B

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
        int n;
        cin >> n;
        vector < ll > v(n);
        vector < ll > odd, even;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) even.push_back(v[i]);
            else odd.push_back(v[i]);
        }
        if (odd.size() == 0 || even.size() == 0) {
            cout << "0\n";
            continue;
        }
        sort (odd.begin(), odd.end());
        sort (even.begin(), even.end());
        ll flag = odd[odd.size()-1];
        ll cnt = even.size();
        for (int j = 0; j < even.size(); j++) {
            if (even[j] < flag) flag += even[j];
            else {
                cnt++;
                break;
            }
        }
        cout << cnt << nl;
    }
}