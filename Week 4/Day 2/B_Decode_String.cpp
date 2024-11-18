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
        string s, s2;
        cin >> s;
        stack < int > st;
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '0') {
                int val = (s[i-2]-'0')*10 + (s[i-1]-'0');
                st.push(val);
                i -= 2;
            }
            else {
                int val = (s[i] - '0');
                st.push(val);
                
            }
        }
        while (!st.empty()) {
            int val = st.top();
            st.pop();
            s2.push_back('a' + (val-1));
        }
        cout << s2 << nl;
    }
}