//Problem_Link: https://codeforces.com/problemset/problem/1935/A

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
        string s;
        cin >> s;
        char left, right;
        int flag = 0;
        for (int i = 0; i < s.size()/2; i++) {
            left = s[i];
            right = s[s.size()-1-i];
            if (left != right) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            if (left < right) cout << s << nl;
            else {
                reverse(s.begin(),s.end());
                cout << s;
                reverse(s.begin(),s.end());
                cout << s << nl;
            }
        }
        else cout << s << nl;
    }
}