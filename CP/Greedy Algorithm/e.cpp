#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

void solve(int c)
{
    int n;
    cin >> n;
    vector<string> v(n + 2);
    v[0] = string(n + 2, '.');
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += '.';
        v[i] = '.' + v[i];
    }
    v[n + 1] = string(n + 2, '.');

    // char arr[26];
    // for (int i = 0; i < 26; i++)
    // {
    //     arr[i] = (char)(65 + i);
    //     cout << arr[i];
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            bool a = 0, b = 0;
            if (v[i][j] == '.')
            {
                string s = "";
                s += v[i][j - 1];
                s += v[i + 1][j];
                s += v[i - 1][j];
                s += v[i][j + 1];
                for (char k = 'A'; k <= 'Z'; k++)
                {
                    if (s.find(k) == string::npos)
                    {
                        v[i][j] = k;
                        break;
                    }
                }
            }
        }
    }
    cout << "Case " << c << ":\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << v[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        solve(i);
        i++;
    }
}