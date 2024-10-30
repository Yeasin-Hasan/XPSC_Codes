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
    int q;
    cin >> q;
    vector < list < string > > v(q);
    int ind;
    for (int i = 0; i < q; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        int flag = 0;
        for (int j = 0; j < q; j++) {
            if(!v[j].empty() && v[j].back() == s1) {
                ind = j;
                flag = 1;
                break;
            }
            else if (v[j].empty()) {
                ind = j;
                break;
            }
        }
        if (flag) v[ind].push_back(s2);
        else {
            v[ind].push_back(s1);
            v[ind].push_back(s2);
        }
    }
    int cnt = 0; 
    for (int i = 0; i < q; i++) {
        if (!v[i].empty()) cnt++;
    }
    cout << cnt << nl;
    for (int i = 0; i < cnt; i++) {
        cout << v[i].front() << " " << v[i].back() << nl;
    }
}