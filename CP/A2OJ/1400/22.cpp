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
    vector<vector<int>> v;
    v.push_back({0});
    for (int i = 1; i <= n; i++)
    {
        vector<int> temp;
        temp.push_back(0);
        for (auto x : v.back())
        {
            temp.push_back((x + 1));
        }
        temp.push_back(0);
        v.push_back(temp);
    }
    int k = 1;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            cout << " ";
        }
        n--;

        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
            if (j != v[i].size() - 1)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i = v.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < 2 * k; j++)
        {
            cout << " ";
        }
        k++;

        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
            if (j != v[i].size() - 1)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)

    solve();
}