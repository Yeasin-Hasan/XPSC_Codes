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
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.size(), l2 = s2.size();
        if (s1[l1-1] == s2[l2-1]) {
            if (s1[l1-1] == 'S') {
                if(l1 > l2) cout << "<\n";
                else if (l1 == l2) cout << "=\n";
                else cout << ">\n";
            }
            else if (s1[l1-1] == 'M') {
                if(l1 > l2) cout << ">\n";
                else if (l1 == l2) cout << "=\n";
                else cout << "<\n";
            }
            else if (s1[l1-1] == 'L') {
                if(l1 > l2) cout << ">\n";
                else if (l1 == l2) cout << "=\n";
                else cout << "<\n";
            }
        }
        else if (s1[l1-1] != s2[l2-1]) {
            if (s1[l1-1] =='S') cout << "<\n";
            else if (s2[l2-1] =='S') cout << ">\n";
            else if (s1[l1-1] =='L') cout << ">\n";
            else if (s2[l2-1] =='L') cout << "<\n";
        }
    }
}