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
        if (s.size() == 1) {
            if (s[0] == 'a') {
                s.push_back('b');
                cout << s << nl;
            }
            else {
                s.push_back('a');
                cout << s << nl;
            }
        }
        else {
            int flag = 0, ind;
            for (int i = 1; i < s.size(); i++) {
                if (s[i] == s[i-1]) {
                    flag = 1;
                    ind = i;
                }
            }
            if (flag) {
                if (s[ind] == 'a') s.insert(s.begin() + ind,'b');
                else s.insert(s.begin() + ind,'a');
                cout << s << nl;
            }
            else {
                if(s.back() == 'a') s.push_back('b');
                else s.push_back('a');
                cout << s << nl;
            }
        }
        
    }
}