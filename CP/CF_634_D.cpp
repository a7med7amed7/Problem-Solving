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
    string s;
    vector<string> v(9);
    int num = 3;
    for (int k = 0; k < 9; k++)
    {
        cin >> s;

        v[k] = s;
    }
    if (v[0][0] - '0' == num)
        v[0][0] = ((num + 1) + '0');
    else
        v[0][0] = (num + '0');
    if (v[1][3] - '0' == num)
        v[1][3] = ((num + 1) + '0');
    else
        v[1][3] = (num + '0');
    if (v[2][6] - '0' == num)
        v[2][6] = ((num + 1) + '0');
    else
        v[2][6] = (num + '0');
    if (v[3][1] - '0' == num)
        v[3][1] = ((num + 1) + '0');
    else
        v[3][1] = (num + '0');
    if (v[4][4] - '0' == num)
        v[4][4] = ((num + 1) + '0');
    else
        v[4][4] = (num + '0');
    if (v[5][7] - '0' == num)
        v[5][7] = ((num + 1) + '0');
    else
        v[5][7] = (num + '0');
    if (v[6][2] - '0' == num)
        v[6][2] = ((num + 1) + '0');
    else
        v[6][2] = (num + '0');
    if (v[7][5] - '0' == num)
        v[7][5] = ((num + 1) + '0');
    else
        v[7][5] = (num + '0');
    if (v[8][8] - '0' == num)
        v[8][8] = ((num + 1) + '0');
    else
        v[8][8] = (num + '0');
    for (int k = 0; k < 9; k++)
    {
        cout << v[k] << "\n";
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