#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
void solve()
{
    int n;
    cin >> n;
    vector<vector<vector<int>>> v(50);
    v[2] = {{1,3,2},{2,3,1},{3,2,1},{3,1,2}};
    for (int i = 3; i < n; i++)
    {
        vector<vector<int>> tempParent;
        for (int j = 0; j < n; j++)
        {
            vector<int> tempChild = v[i-1][j];
        }
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    int t;
    cin >> t;
    while (t--)
        solve();
}
