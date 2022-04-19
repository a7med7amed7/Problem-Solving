#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
int mx = 1;
void check(int i, int n, vector<int> arr, vector<int> temp = {})
{
    if (i == n)
    {
        mx = max(mx, (int)temp.size());
        return;
    }
    if (temp.empty() || arr[i] > temp.back())
    {
        temp.push_back(arr[i]);
        check(i + 1, n, arr, temp);
        temp.pop_back();
    }
    check(i + 1, n, arr, temp);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    check(0, n, arr);
    cout << mx;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);

    solve();
}
