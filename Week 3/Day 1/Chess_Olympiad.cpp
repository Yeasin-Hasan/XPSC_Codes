//^-^-^-^-^-^-^-^-^-^-^||
//________YEASIN_______||
//___HASAN______EMAL___||
//^-^-^-^-^-^-^-^-^-^-^||
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define mod 1000000007
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    fast;
    float x, y, z;
    cin >> x >> y >> z;
    float point = 0, opp_point = 0;
    point = (x*1)+(y*0.5);
    opp_point = (y*0.5) + (z*1);
    float rem_match = 4 - (x+y+z);
    point = point + rem_match;
    if(point > opp_point) yes;
    else no;
}