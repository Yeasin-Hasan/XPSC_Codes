//Problem_Name: Not a Substring
//Problem_Link: https://codeforces.com/problemset/problem/1860/A

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
        int n = s.size();
        int flag = 0;
        for (int i = 0; i < n-1; i++) {
            if((s[i] == '(' && s[i+1] == '(') || (s[i] == ')' && s[i+1] == ')')) {
                flag = 1;
                break;
            }
        }
        if (n == 2 && s[0] == '(' && s[1] == ')') {
            no;
            continue;
        }
        else yes;
        if (flag) {
            for (int i = 0; i < n; i++) {
                cout << "()";
            }
            cout << nl;
        }
        else {
            for (int i = 0; i < n; i++) cout << "(";
            for (int i = 0; i < n; i++) cout << ")";
            cout << nl;
        }
    }
}