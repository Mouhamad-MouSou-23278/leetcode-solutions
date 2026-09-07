# Subarray Sum Equals K

## Approach

Use **Prefix Sum + HashMap**.

For every element:

1. Calculate the current prefix sum.
2. Check if `sum - k` already exists in the HashMap.
3. If it exists, add its frequency to `count`.
4. Store the current prefix sum in the HashMap.

### Key Idea

If:

```text
currentSum - previousSum = k
```

then:

```text
previousSum = currentSum - k
```

So we store previous prefix sums in a HashMap.

## Important

Initialize:

```cpp
prefix_count[0] = 1;
```

This handles subarrays that start from index `0`.

We store the **frequency** of each prefix sum because the same prefix sum can appear multiple times.

## Complexity

```text
Time:  O(n) average
Space: O(n)
```

## Pattern

**Prefix Sum + HashMap**

## Key Lesson

Instead of checking every subarray with `O(n²)`, use previous prefix sums to find the answer in `O(n)` average time.
