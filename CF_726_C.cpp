#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

// void sortMe(vector<int> &v, vector<bool> t, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool s = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (v[j] > v[j + 1] && t[j] != t[j + 1])
//             {
//                 swap(v[j], v[j + 1]);
//                 s = 1;
//             }
//         }
//         if (!s)
//             break;
//     }
// }

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int dif = INT_MAX, one, two;
    for (int i = 0; i < n - 1; i++)
    {

        if (abs(v[i] - v[i + 1]) < dif)
        {
            dif = abs(v[i] - v[i + 1]);
            one = i;
        }
    }
    vector<int> ans;
    cout << v[one] << " ";
    for (int i = 0; i < n; i++)
    {
        if (i == one || i == one + 1)
            continue;
        if (v[i] > v[one])
            cout << v[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        if (i == one || i == one + 1)
            continue;
        if (v[i] <= v[one])
            cout << v[i] << " ";
    }
    cout << v[one + 1];
    cout << "\n";
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