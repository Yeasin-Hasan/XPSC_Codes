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
    int n, m;
    cin >> n >> m;
    vector < pair < string, int > > v(m);
    for (int i = 0; i < m; i++) {
        string s1, s2, s3, s4;
        int a;
        cin >> s1 >> s2 >> s3 >> s4 >> a;
        v[i] = {s3,a};
    }
    int i = 1, j = n;
    int mn = 0;
    for (int k = 0; k < m; k++) {
        if (v[k].first == "right" && v[k].second + 1 > i) i = v[k].second + 1;
        else if (v[k].first == "left" && v[k].second - 1 < j) j = v[k].second - 1;
    }
    if (i <= j) cout << j-i+1;
    else cout << "-1";
    
}