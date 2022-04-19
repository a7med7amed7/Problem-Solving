#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

void add(stack<pair<int, int>> st, int ans[], int x, int i)
{
    while (!st.empty() && x == st.top().ff)
    {
        ans[st.top().ss]++;
        ans[i]++;
        st.pop();
    }
}

void solve()
{
    int n;
    cin >> n;
    int arr[n], ans[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stack<pair<int, int>> st;
    st.push({arr[0], 0});
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < st.top().ff)
        {
            st.push({arr[i], i});
        }
        else
        {
            while (!st.empty() && arr[i] > st.top().ff)
            {
                st.pop();
            }
            stack<pair<int, int>> temp = st;
            add(temp, ans, arr[i], i);

            st.push({arr[i], i});
        }
    }
    for (int i = 0; i < n; i++)
    {

        cout << ans[i] << " ";
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
