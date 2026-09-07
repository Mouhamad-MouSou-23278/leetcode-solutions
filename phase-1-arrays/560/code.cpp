class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_count;
        prefix_count[0] = 1;

        int sum = 0;
        int count = 0;

        for (int num : nums) {
            sum += num;

            if (prefix_count.find(sum - k) != prefix_count.end()) {
                count += prefix_count[sum - k];
            }

            prefix_count[sum]++;
        }

        return count;
    }
};