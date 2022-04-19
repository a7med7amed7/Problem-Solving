#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        arr[i] = e;
    };
    int r = 0;

    int maxNum = arr[0], minNum = arr[0], maxIndex = 0, minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxNum)
        {
            maxIndex = i;
            maxNum = arr[i];
        }
        if (arr[i] <= minNum)
        {
            minIndex = i;
            minNum = arr[i];
        }
    }

    r += maxIndex; // 6 + (6-2)
    if (maxIndex > minIndex)
    {
        minIndex += 1;
    }
    r += (n - 1 - minIndex);
    cout << r;
}