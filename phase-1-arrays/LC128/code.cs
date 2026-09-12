using System;
using System.Collections.Generic;

public class Solution
{
    public int LongestConsecutive(int[] nums)
    {
        HashSet<int> numbers = new HashSet<int>(nums);

        int maxCount = 0;

        foreach (int num in numbers)
        {
            
            if (!numbers.Contains(num - 1))
            {
                int currentNum = num;
                int currentCount = 1;

                while (numbers.Contains(currentNum + 1))
                {
                    currentNum++;
                    currentCount++;
                }

                maxCount = Math.Max(maxCount, currentCount);
            }
        }

        return maxCount;
    }
}