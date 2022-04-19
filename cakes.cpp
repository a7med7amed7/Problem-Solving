#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
int n, m;

bool valid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
        return 1;
    return 0;
}

int a = 0, b = 0, c = n - 1, d = n - 1;

void solve(int i, int j, vector<vector<char>> &v)
{

    cout << v[i][j] << " ";
    if (i == a)
    {
        if (j == d)
            solve(i + 1, j, v);
        else
            solve(i, j + 1, v);
    }
    if (i == c)
    {
        if (j == d)
            solve(i - 1, j, v);
        else
            solve(i, j - 1, v);
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    cin >> n;
    int x, y;
    vector<vector<char>> v(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    char c = v[0][0];
    solve(0, 0, v);
}