#include <vector>
#include <iostream>

using namespace std;

vector<int> productExceptSelf(const vector<int>& nums)
{
    int n = nums.size();
    vector<int> answer(n, 1);

    
    int prefix = 1;

    for (int i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    
    int suffix = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    return answer;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = productExceptSelf(nums);

    for (int num : result)
        cout << num << " ";

    return 0;
}