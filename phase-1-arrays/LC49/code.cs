using System;
using System.Collections.Generic;

public class Solution
{
    public IList<IList<string>> GroupAnagrams(string[] strs)
    {
        Dictionary<string, List<string>> groups =
            new Dictionary<string, List<string>>();

        foreach (string s in strs)
        {
            int[] count = new int[26];

            foreach (char c in s)
            {
                count[c - 'a']++;
            }

            string key = string.Join("#", count);

            if (!groups.ContainsKey(key))
            {
                groups[key] = new List<string>();
            }

            groups[key].Add(s);
        }

        IList<IList<string>> result =
            new List<IList<string>>();

        foreach (List<string> group in groups.Values)
        {
            result.Add(group);
        }

        return result;
    }

    public static void Main()
    {
        Solution solution = new Solution();

        string[] strs =
        {
            "eat",
            "tea",
            "tan",
            "ate",
            "nat",
            "bat"
        };

        var result = solution.GroupAnagrams(strs);

        foreach (var group in result)
        {
            Console.WriteLine(
                "[" + string.Join(", ", group) + "]"
            );
        }
    }
}