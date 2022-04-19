#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

multiset<vector<int>> s;

void solve(int i, int arr[], int n, vector<int> v = {})
{
    if (i == n)
    {
        if (!v.empty())
            s.insert(v);
        return;
    }

    solve(i + 1, arr, n, v);
    if (v.empty())
    {
        v.push_back(arr[i]);
        solve(i + 1, arr, n, v);
    }
    else
    {
        if (arr[i] > v.back())
        {
            v.push_back(arr[i]);
            solve(i + 1, arr, n, v);
        }
        else
            return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    // int t;
    // cin >> t;
    // while (t--)
    // {

    // }
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(0, arr, n);
    for (auto x : s)
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i] << " ";
        }
        cout << "\n";
    }
}