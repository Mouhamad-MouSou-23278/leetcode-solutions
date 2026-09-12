#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int longestConsecutive(const vector<int>& arr)
{
    unordered_set<int> numbers(arr.begin(), arr.end());

    int maxCount = 0;

    for (int num : numbers)
    {
        
        if (numbers.find(num - 1) == numbers.end())
        {
            int currentNum = num;
            int currentCount = 1;

            while (numbers.find(currentNum + 1) != numbers.end())
            {
                currentNum++;
                currentCount++;
            }

            maxCount = max(maxCount, currentCount);
        }
    }

    return maxCount;
}

int main()
{
    vector<int> arr = {100, 4, 200, 1, 3, 2};

    cout << longestConsecutive(arr) << endl;

    return 0;
}