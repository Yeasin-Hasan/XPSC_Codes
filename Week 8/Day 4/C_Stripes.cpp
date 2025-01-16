//Problem_Name: Stripes
//Problem_Link: https://codeforces.com/problemset/problem/1742/C

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
    while (t--) {
        string s2, s3, s4, s5, s6, s7, s8 , s9;
        cin.ignore();
        cin >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9;
        int count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0, count9=0;
        for ( int i=0; i<8; i++)
        {
            if (s2[i]=='R') count2++;
            if (s3[i]=='R') count3++;
            if (s4[i]=='R') count4++;
            if (s5[i]=='R') count5++;
            if (s6[i]=='R') count6++;
            if (s7[i]=='R') count7++;
            if (s8[i]=='R') count8++;
            if (s9[i]=='R') count9++;
        }
        if (count2==8 || count3==8 || count4==8 || count5==8 || count6==8 || count7==8 || count8==8 || count9==8)
        {
            if (count2==8) cout << "R" << nl;
            else if (count3==8) cout << "R" << nl;
            else if (count4==8) cout << "R" << nl;
            else if (count5==8) cout << "R" << nl;
            else if (count6==8) cout << "R" << nl;
            else if (count7==8) cout << "R" << nl;
            else if (count8==8) cout << "R" << nl;
            else if (count9==8) cout << "R" << nl;
        }
        else
        {
            for (int i=0; i<8; i++)
            {
                if (s2[i]==s3[i] && s3[i]==s4[i] && s4[i]==s5[i] && s5[i]==s6[i] && s6[i]==s7[i] && s7[i]==s8[i] && s8[i]==s9[i])
                {
                    if (s2[i]=='B')
                    {
                        cout << "B" << nl;
                        break;
                    }
                }
            }
        }
    }
}