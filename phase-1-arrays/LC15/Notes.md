# Session 9 — 3Sum

## Problem

LeetCode 15 — 3Sum

Find all unique triplets whose sum is equal to zero.

Example:

    [-1, 0, 1, 2, -1, -4]

Output:

    [
        [-1, -1, 2],
        [-1, 0, 1]
    ]

---

## Pattern

Sorting + Two Pointers

---

## Key Idea

Instead of using three nested loops:

    O(n³)

Sort the array first.

Then:

1. Fix one element `nums[i]`.
2. Use two pointers for the remaining elements.
3. `left = i + 1`
4. `right = n - 1`

We need:

    nums[i] + nums[left] + nums[right] = 0

Therefore:

    nums[left] + nums[right] = -nums[i]

---

## Why Sorting Helps

Example:

    [-4, -1, -1, 0, 1, 2]

Because the array is sorted:

If:

    sum < 0

we need a larger value.

Therefore:

    left++

If:

    sum > 0

we need a smaller value.

Therefore:

    right--

---

## Algorithm

1. Sort the array.
2. Loop through every possible `i`.
3. Skip duplicate values for `i`.
4. Set:

       left = i + 1
       right = n - 1

5. Calculate:

       sum = nums[i] + nums[left] + nums[right]

6. If `sum == 0`:
   - Add the triplet.
   - Skip duplicate left values.
   - Skip duplicate right values.
   - Move both pointers.
7. If `sum < 0`:
   - Move `left`.
8. If `sum > 0`:
   - Move `right`.

---

## Duplicate Handling

This is extremely important.

For `i`:

    if (i > 0 && nums[i] == nums[i - 1])
        continue;

This prevents the same first value from generating
duplicate triplets.

After finding a valid triplet:

    while (nums[left] == nums[left + 1])
        left++;

    while (nums[right] == nums[right - 1])
        right--;

Then move:

    left++;
    right--;

---

## Example

Sorted:

    [-4, -1, -1, 0, 1, 2]

Suppose:

    i = 1
    nums[i] = -1

We need:

    nums[left] + nums[right] = 1

Start:

    left = 2
    right = 5

Values:

    -1 + 2 = 1

Therefore:

    -1 + -1 + 2 = 0

Found:

    [-1, -1, 2]

Then continue searching.

---

## Why O(n²)?

Sorting:

    O(n log n)

For every `i`, the two pointers scan the remaining array:

    O(n)

There are approximately `n` choices for `i`.

Therefore:

    O(n log n) + O(n²)

Final:

    O(n²)

---

## Complexity

Time:

    O(n²)

Space:

    O(1) extra

The returned result is not counted as extra space.



