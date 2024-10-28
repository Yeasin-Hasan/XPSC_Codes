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
    string s;
    cin >> s;
    int a[27] = {0};
    for (int i = 0; i < s.size(); i++) {
        a[s[i]-'a'+1]++;
    }
    int flag = 0, pos;
    for (int i = 1; i < 27; i++) {
        if (a[i] == 0) {
            pos = i;
            flag = 1;
            break;
        }
    }
    if (flag) cout << (char)('a'+(pos-1));
    else cout << "None";
}