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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!st.empty())
        {
            while (!st.empty() && arr[i] >= st.top())
                st.pop();
            temp = arr[i];
            if (st.empty())
            {
                arr[i] = -1;
            }
            else
            {
                arr[i] = st.top();
            }
        }
        else
        {
            temp = arr[i];
            arr[i] = -1;
        }
        st.push(temp);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    solve();
}
