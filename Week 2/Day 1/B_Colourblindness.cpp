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
        string s, t;
        cin >> s >> t;
        int flag = 1;
        for (int i = 0 ; i < n; i++) {
            if (s[i] == 'R' && t[i] != 'R') {
                flag = 0;
                break;
            }
            else if (s[i] == 'G' && t[i] == 'R') {
                flag = 0;
                break;
            }
            else if (s[i] == 'B' && t[i] == 'R') {
                flag = 0;
                break;
            }
        }
        if (flag) yes;
        else no;
    }
}