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
        string str;
        cin >> str;
        if (n != 5) no;
        else {
            int countT = 0, counti = 0, countm = 0, countu = 0, countr = 0;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == 'T') countT++;
                else if (str[i] == 'i') counti++;
                else if (str[i] == 'm') countm++;
                else if (str[i] == 'u') countu++;
                else if (str[i] == 'r') countr++;
            }
            
            if ((countT == 1) && (counti == 1) && (countm == 1) && (countu == 1) && (countr == 1)) yes;
            else no;
        }
    }
}