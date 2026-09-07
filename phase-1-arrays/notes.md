# 121. Best Time to Buy and Sell Stock

## Difficulty
Easy

## Pattern
Running Minimum
One Pass Traversal
State Tracking

## Key Observation

To maximize profit on day i, we only need the minimum stock price seen before day i.

Instead of comparing every previous price, we maintain a running minimum while scanning the array.

## Algorithm

1. Initialize `minPrice` to infinity.
2. Initialize `maxProfit` to 0.
3. Traverse the array once.
4. Update `minPrice` if the current price is lower.
5. Compute the profit by selling today.
6. Update `maxProfit`.
7. Return `maxProfit`.

## Complexity

- Time: O(n)
- Space: O(1)

## What I Learned

- How to replace a nested loop with a running state.
- How to recognize that only the minimum previous value is needed.
- How to derive an O(n) solution from an O(n²) brute-force approach.

## Related Problems

- Maximum Subarray (Kadane's Algorithm)
- Container With Most Water
- Trapping Rain Water