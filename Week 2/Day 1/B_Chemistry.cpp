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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int a[27] = {0};
        for (int i = 0; i < s.size(); i++) {
            a[s[i] - 'a' + 1]++;
        }
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < 27; i++) {
            if (a[i] > 0 && a[i]%2 == 0) cnt2++;
            else if (a[i] > 0 && a[i]%2 == 1) cnt1++;
        }       
        cnt1 = cnt1 - k; 
        bool flag = false;
        /*if (cnt1 < 0) {
            int flag2 = cnt1*(-1);
            if (cnt2 - flag2 != 0 && flag2 % 2 == 0) flag = true;
        } 
        else if (cnt1 == 1 || cnt1 == 0) flag = true;*/
        if (cnt1 <= 1) flag = true;
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}