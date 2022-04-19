#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

bool comp(pair<int, int> &a, pair<int, int> &b)
{

    return abs(a.first - a.second) > abs(b.first - b.second);
}

bool check(ll n)
{
    ll sq = sqrt(n);
    return n == sq * sq;
}
int n, m, k;

bool valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < m);
}

void solve(int i, int j, vector<string> &v)
{
    if (!valid(i, j) || k == 0 || (v[i][j] != '.'))
        return;

    if (k)
    {
        v[i][j] = 'X';
        k--;
        solve(i, j - 1, v);
        solve(i, j + 1, v);
        solve(i - 1, j, v);
        solve(i + 1, j, v);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);

    int arr[10] = {1, 5, -3, 15, -8, 23, 17, 2, 1, 60};

    int ans[3] = {0, 0, 0};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > ans[2])
        {
            swap(ans[0], ans[1]);
            swap(ans[1], ans[2]);
            ans[2] = arr[i];
            continue;
        }
        if (arr[i] > ans[1])
        {
            swap(ans[0], ans[1]);
            ans[1] = arr[i];
            continue;
        }
        if (arr[i] > ans[0])
        {
            ans[0] = arr[i];
            continue;
        }
        cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
    }

    cout << ans[0] << " " << ans[1] << " " << ans[2];
}