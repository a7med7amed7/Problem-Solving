#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second
string x = "";
vector<string> st;
void print(string s, int l, int r)
{
    if (s == string(s.size(), '0') || s == string(s.size(), '1'))
    {
        st.push_back(string(s + x));
        return;
    }
    if (l == r)
    {
        st.push_back(string(s + x));
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        print(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

void check(int n, string s = "")
{
    if (n == 0)
    {
        x = s;
        print(s, 0, s.size() - 1);
        return;
    }
    check(n - 1, s + '0');
    check(n - 1, s + '1');
    sort(all(st));
    for (auto c : st)
    {
        cout << c << "\n";
    }
}

void generate(int dif, char *ans, int i, int j, vector<string> &v)
{
    if (abs(dif) > (j - i + 1) / 2)
        return;
    if (i > j)
    {
        if (dif == 0)
        {
            v.push_back(ans);
        }
        return;
    }
    ans[i] = '0', ans[j] = '0';
    generate(dif, ans, i + 1, j - 1, v);
    ans[i] = '0', ans[j] = '1';
    generate(dif + 1, ans, i + 1, j - 1, v);
    ans[i] = '1', ans[j] = '1';
    generate(dif, ans, i + 1, j - 1, v);
    ans[i] = '1', ans[j] = '0';
    generate(dif - 1, ans, i + 1, j - 1, v);
}

void solve()
{
    int n;
    cin >> n;
    char ans[2 * n + 1];
    ans[2 * n] = '\0';
    vector<string> v;
    generate(0, ans, 0, 2 * n - 1, v);
    sort(all(v));
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
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
