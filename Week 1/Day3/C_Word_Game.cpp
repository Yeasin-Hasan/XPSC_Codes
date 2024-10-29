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
        vector < vector <string> > v(3);
        map <string, int> m;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string s1; 
                cin >> s1;
                v[i].push_back(s1);
                m[s1]++;
            }
        }
        int pnt1 = 0, pnt2 = 0, pnt3 = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0) {
                    if(m[v[i][j]] == 1) pnt1 += 3;
                    else if(m[v[i][j]] == 2) pnt1 += 1;
                }
                else if (i == 1) {
                    if(m[v[i][j]] == 1) pnt2 += 3;
                    else if(m[v[i][j]] == 2) pnt2 += 1;
                }
                if (i == 2) {
                    if(m[v[i][j]] == 1) pnt3 += 3;
                    else if(m[v[i][j]] == 2) pnt3 += 1;
                }
            }
        }
        cout << pnt1 << " " << pnt2 << " " << pnt3 << nl;
    }
}