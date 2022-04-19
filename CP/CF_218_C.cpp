#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second

// bool check(int mid, int B, int S, int C)
// {
//     int ans = 0;
//     while (true)
//     {
//         if (B > b || C > c || S > s)
//             break;
//         ans++;
//         b -= B;
//         s -= C;
//         s -= S;
//         // cout << ans;
//         if (ans == mid)
//             return 1;
//     }
//     while (r > 0)
//     {
//         if (B > b)
//         {
//             int dif = B - b;
//             if (r >= x * dif)
//             {
//                 B += dif;
//                 r -= x * dif;
//             }
//         }
//         else
//             break;
//         if (S > s)
//         {
//             int dif = S - s;
//             if (r >= y * dif)
//             {
//                 S += dif;
//                 r -= y * dif;
//             }
//         }
//         else
//             break;
//         if (C > c)
//         {
//             int dif = C - c;
//             if (r >= z * dif)
//             {
//                 C += dif;
//                 r -= x * dif;
//             }
//         }
//         else
//             break;
//         ans++;
//         if (ans == mid)
//             return 1;
//     }
//     return 0;
// }

void solve()
{
    string st;
    cin >> st;
    int b, s, c, x, y, z, r;
    cin >> b >> s >> c >> x >> y >> z >> r;
    int B = 0, S = 0, C = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == 'B')
            B++;
        else if (st[i] == 'S')
            S++;
        else if (st[i] == 'C')
            C++;
    }
    int ans = 0;
    // Make Burger with current ings
    while (true)
    {
        if (B > b || S > c || C > c)
            break;

        b -= B;
        s -= S;
        c -= C;
        ans++;
    }
    while (r > 0)
    {
        if (b >= B)
        {
            b -= B;
        }
        else
        {
            // Buy B
            int amount = B - b;
            if (r >= x * amount)
            {
                r -= (x * amount);
            }
            else
                break;
        }
        if (c >= C)
        {
            c -= C;
        }
        else
        {
            // Buy C
            int amount = C - c;
            if (r >= y * amount)
            {
                r -= (y * amount);
            }
            else
                break;
        }
        if (s >= S)
        {
            s -= S;
        }
        else
        {
            // Buy S
            int amount = S - s;
            if (r >= z * amount)
            {
                r -= (z * amount);
            }
            else
                break;
        }
        ans++;
    }
    cout << ans;
    // int l = 0, r = 1e9, mid, ans = 0;
    // while (l < r)
    // {
    //     mid = (l + r) >> 1;
    //     if (check(mid, B, S, C))
    //     {
    //         l = r + 1;
    //         ans = mid;
    //     }
    //     else
    //     {
    //         r = l - 1;
    //     }
    // }
    // cout << ans << "\n";
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
    solve();
}