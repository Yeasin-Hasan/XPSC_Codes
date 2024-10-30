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
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        int cntB = 0, cntb = 0;
        string s1;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] >= 97 && s[i] <= 122 && s[i] != 'b') {
                if (cntb == 0) s1.push_back(s[i]);
                else if (cntb > 0) cntb -= 1;
            }
            else if(s[i] >= 65 && s[i] <= 90 && s[i] != 'B') {
                if (cntB == 0) s1.push_back(s[i]);
                else if (cntB > 0) cntB -= 1;
            }
            else if(s[i] >= 97 && s[i] <= 122 && s[i] == 'b') {
                cntb++;
            }
            else if(s[i] >= 65 && s[i] <= 90 && s[i] == 'B') {
                cntB++;
            }
        }
        reverse(s1.begin(), s1.end());
        cout << s1 << nl;
    }
}