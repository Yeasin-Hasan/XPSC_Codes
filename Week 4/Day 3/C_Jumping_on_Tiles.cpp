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

bool cmp1 (pair <char, int> p, pair <char, int> q) {
    if (p.first == q.first) {
        return p.second > q.second;
    }
    else return p.first < q.first;
}
bool cmp2 (pair <char, int> p, pair <char, int> q) {
    if (p.first == q.first) {
        return p.second < q.second;
    }
    else return p.first < q.first;
}

int main()
{
    fast;
    int t;
    cin >> t;    
    while (t--)
    {
        string s;
        cin >> s;
        char first = s[0], last = s[s.size()-1];
        vector < pair <char, int> > p;
        for (int i = 0; i < s.size(); i++) {
            p.push_back({s[i],i});
        }

        if (first > last ) sort (p.begin(), p.end(),cmp1);
        else sort (p.begin(), p.end(),cmp2);

        int first_ind, last_ind;
        if (first <= last) {
            for (int i = 0; i < p.size(); i++) {
                if (p[i].first == first) {
                    first_ind = i;
                    break;
                }
            }
            for (int i = 0; i < p.size(); i++) {
                if (p[i].first == last) last_ind = i;
            }
        }
        else {
            for (int i = 0; i < p.size(); i++) {
                if (p[i].first == first) {
                    first_ind = i;
                }
            }
            for (int i = 0; i < p.size(); i++) {
                if (p[i].first == last) {
                    last_ind = i;
                    break;
                }
            }
        }
        
        int cost = 0, m = 1;
        if (first <= last) {
            for (int i = first_ind; i < last_ind; i++) {
                cost += (p[i+1].first-p[i].first);
            }
            m = last_ind - first_ind + 1;
        }
        else {
            for (int i = first_ind; i > last_ind; i--) {
                cost += (p[i].first-p[i-1].first);
            }
            m = first_ind - last_ind + 1;
        }
        cout << cost << " " << m << nl;

        if (first <= last) {
            for (int i = first_ind; i <= last_ind; i++) {
                cout << p[i].second + 1 << " ";
            }
        }
        else {
            for (int i = first_ind; i >= last_ind; i--) {
                cout << p[i].second + 1 << " ";
            }
        }
        cout << nl;
    }
}