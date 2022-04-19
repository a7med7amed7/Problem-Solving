#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> first;
    vector<int> last;
    vector<int> s1(2);
    vector<int> s2;

    //vector<int>::iterator it = nums.begin();
    for (int i = 0; i < nums.size(); i++)
    {
        if (i < nums.size() / 2)
        {
            first.emplace_back(nums[i]);
        }
        else
        {
            last.emplace_back(nums[i]);
        }
    }
    float avg1 = 0, avg2 = 0;
    for (int i = 0; i < first.size(); i++)
    {
        avg1 += first[i];
        avg2 += last[i];
    }

    cout << avg1 << " " << avg2 << endl;

    avg1 = avg1 / first.size();
    avg2 = avg2 / last.size();
    cout << avg1 << " " << avg2 << endl;

    float n = avg1 - avg2;

    if (n < 0)
    {
        n = -n;
    };

    for (int i = 0; i < first.size(); i++)
    {
        for (int j = i; j < first.size() - 1; j++)
        {
            if ((first[i] + first[j]) / 2 == avg1)
            {
                s1[0], s1[1] = first[i], first[j];
                break;
            };
        };
    };

    cout << s1[0] << " " << s1[1] << endl;

    cout << n;
}