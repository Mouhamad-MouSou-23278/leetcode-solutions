#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> groups;

        for (const string& s : strs)
        {
            vector<int> count(26, 0);

            for (char c : s)
            {
                count[c - 'a']++;
            }

            ostringstream builder;

            for (int value : count)
            {
                builder << value << '#';
            }

            string key = builder.str();

            groups[key].push_back(s);
        }

        vector<vector<string>> result;

        for (auto& [key, group] : groups)
        {
            result.push_back(group);
        }

        return result;
    }
};

int main()
{
    Solution solution;

    vector<string> strs =
    {
        "eat",
        "tea",
        "tan",
        "ate",
        "nat",
        "bat"
    };

    vector<vector<string>> result =
        solution.groupAnagrams(strs);

    for (const auto& group : result)
    {
        cout << "[";

        for (int i = 0; i < group.size(); i++)
        {
            cout << group[i];

            if (i < group.size() - 1)
                cout << ", ";
        }

        cout << "]" << endl;
    }

    return 0;
}