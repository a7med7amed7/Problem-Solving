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
    vector<bool> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool x;
    int o = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t[i] = x;
        if (x)
            o++;
        else
            z++;
    }
    if (o != 0 & z != 0)
        cout << "YES\n";
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    // USING ONE DIFFERENT ELEMENT WE CAN SORT THE SEQUENCE
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