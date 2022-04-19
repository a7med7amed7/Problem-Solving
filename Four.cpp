#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    int maxProfit(int k, vector<int> &prices)
    {
        int d = 0;
        for (int i = 0; i < k; i++)
        {
            int s = prices[0],x=0;
            for (int j = 0; j < prices.size() - 1; j++)
            {
                for (int m = j + 1; m < prices.size(); m++)
                {
                    if (prices[m] - prices[j] > s)
                    {
                        s = prices[m] - prices[j];
                    }
                }
            }
        }
    }
};

int main()
{
    int k,
        vector<int> v = {2, 4, 1};
    cin >> k;
    Solution s;
    cout << s.maxProfit(k, v);
}