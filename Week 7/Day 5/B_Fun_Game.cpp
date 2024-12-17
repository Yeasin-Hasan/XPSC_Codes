//Problem_Name: Fun Game
//Problem_Link: https://codeforces.com/problemset/problem/1994/B

//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        int first_1 = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                first_1 = i;
                break;
            }
        }
        int first_error = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i]) {
                first_error = i;
                break;
            }
        }
        if (first_error == -1) yes;
        else if (first_1 == -1) {
            if (first_error == -1) yes;
            else no;
        }
        else if (first_1 == 0) yes;
        else if (first_error >= first_1) yes;
        else no;
    }
}