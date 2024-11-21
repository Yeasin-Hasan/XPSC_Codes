//Problem_Location: https://codeforces.com/problemset/problem/1100/A

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
    
    int n, k;
    cin >> n >> k;
    int a[n+1];
    int cnt_info = 0, cnt_scl = 0;
    for (int i = 1; i < n+1; i++) {
        cin >> a[i];
        if (a[i] == 1) cnt_info++;
        else cnt_scl++;
    }
    
    int mx_diff = INT_MIN;
    for (int i = 1; i < n+1; i++) {
        int minus_info = 0, minus_scl = 0;
        for (int j = i; j < n+1; j += k) {
            if (a[j] == 1) minus_info++;
            else minus_scl++;
        }
        for (int j = i-k; j >= 1; j -= k) {
            if (a[j] == 1) minus_info++;
            else minus_scl++;
        }
        int final_info = cnt_info - minus_info;
        int final_scl = cnt_scl - minus_scl;
        int abs_diff = abs (final_info - final_scl);
        if (abs_diff > mx_diff) mx_diff = abs_diff;
    }
    cout << mx_diff;
}