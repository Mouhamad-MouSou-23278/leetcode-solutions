# Two Sum II - Input Array Is Sorted

## Pattern

**Two Pointers (Sorted Array)**

## Approach

Since the array is sorted:

* Start with one pointer at the beginning.
* Start another pointer at the end.
* Calculate the current sum.

If:

```text
sum < target
```

Move the left pointer to increase the sum.

If:

```text
sum > target
```

Move the right pointer to decrease the sum.

If:

```text
sum == target
```

Return the answer.

## Why It Works

The array is sorted.

* Moving the left pointer always increases the sum.
* Moving the right pointer always decreases the sum.

This allows us to eliminate impossible pairs without checking every combination.

## Algorithm

1. Initialize `left = 0` and `right = n - 1`.
2. Calculate `sum = numbers[left] + numbers[right]`.
3. If `sum < target`, move `left`.
4. If `sum > target`, move `right`.
5. Otherwise, return the two indices.

## Complexity

```text
Time : O(n)

Space: O(1)
```

## Pattern Learned

* Two Pointers
* Sorted Array
* Search Space Elimination

## Key Lesson

Whenever an array is sorted and the problem asks for a pair with a specific sum, consider the Two Pointer technique before using a HashMap.
