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
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(9);
    ll t;
    cin >> t;
    ll arr[100005];
    ll mod=1e9+7;
    arr[0]=0;
    arr[1]=1;
    for(ll i=2;i<1e5+5;i++){
        ll x=arr[i-1]%mod;
        ll y=arr[i-2]%mod;
        arr[i] =((x+y)%mod);
    }
    while (t--)
        {
            ll l,r;
            cin>>l>>r;
            ll x=arr[r-1];
            ll y=arr[l-1];
            while(x<y){
                x+=(1e9+7);
            }
            cout << x-y<<"\n";
        }
}