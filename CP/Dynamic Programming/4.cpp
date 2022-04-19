#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, a, n) for (int i = (a); i <= (n); i++)
#define ff first
#define ss second



int check(int i,vector<int> nums,vector<int> &dp){
	if(i>=nums.size())return 0;
	int l=nums[i]+check(i+2,nums,dp);
	int r=check(i+1,nums,dp);
    cout << l << " "<<r<<"\n";
	return dp[i]=max(l,r);
}

int maximumNonAdjacentSum(vector<int> &nums){
    vector<int> dp;
	if(nums.size()==1) return nums[0];
	check(0,nums,dp);
	return max(dp[0],dp[1]);
}
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << maximumNonAdjacentSum(arr)<<"\n";
    
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