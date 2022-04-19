#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

int a[1003];
int b[1003];

void shift(int k)
{
    int i = 0, j = k;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++, j--;
    }
    for (int m = 0; m < k; m++)
    {
        a[m] ^= 1;
    }
}
void solve()
{
    int n;
    char x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = x - '0';
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        b[i] = x - '0';
    }
    vector<int> ans;
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] != b[i])
        {
            if (a[i] != a[0])
            {
                ans.push_back(1);
                a[0] = a[i];
            }
            ans.push_back(i + 1);
            shift(i);
        }
    }
    if (a[0] != b[0])
        ans.push_back(1);
    cout << ans.size() << " ";
    for (auto z : ans)
    {
        cout << z << " ";
    }
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