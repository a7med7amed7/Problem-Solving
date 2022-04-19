#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

int n, m;
bool isValid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < m);
}

void solve(int i, int j, vector<vector<char>> &arr)
{
    if (!isValid(i, j))
    {
        return;
    }
    char temp = arr[i][j];
    arr[i][j] = 'x';
    if (isValid(i + 1, j) && arr[i + 1][j] == temp)
    {
        solve(i + 1, j, arr);
    }
    if (isValid(i - 1, j) && arr[i - 1][j] == temp)
    {
        solve(i - 1, j, arr);
    }
    if (isValid(i, j + 1) && arr[i][j + 1] == temp)
    {
        solve(i, j + 1, arr);
    }
    if (isValid(i, j - 1) && arr[i][j - 1] == temp)
    {
        solve(i, j - 1, arr);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != 'x')
            {
                solve(i, j, arr);
                c++;
            }
            else
                continue;
        }
    }
    cout << c;
}