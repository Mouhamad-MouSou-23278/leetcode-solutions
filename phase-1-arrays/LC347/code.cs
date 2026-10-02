using System;
using System.Collections.Generic;

public class Solution
{
    public int[] TopKFrequent(int[] nums, int k)
    {
        Dictionary<int, int> frequency = new Dictionary<int, int>();

        // Count frequencies
        foreach (int num in nums)
        {
            if (frequency.ContainsKey(num))
                frequency[num]++;
            else
                frequency[num] = 1;
        }

        // Min-heap: {frequency, number}
        PriorityQueue<int, int> heap = new PriorityQueue<int, int>();

        // Keep only the k most frequent elements
        foreach (var pair in frequency)
        {
            int num = pair.Key;
            int freq = pair.Value;

            if (heap.Count < k)
            {
                heap.Enqueue(num, freq);
            }
            else
            {
                heap.TryPeek(out _, out int smallestFrequency);

                if (freq > smallestFrequency)
                {
                    heap.Dequeue();
                    heap.Enqueue(num, freq);
                }
            }
        }

        int[] result = new int[k];

        for (int i = 0; i < k; i++)
        {
            result[i] = heap.Dequeue();
        }

        return result;
    }
}