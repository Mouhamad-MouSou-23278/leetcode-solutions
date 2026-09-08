# Container With Most Water

## Pattern

**Two Pointers**

## Approach

Start with two pointers:

* `left = 0`
* `right = n - 1`

At each step:

1. Calculate the current area.
2. Update the maximum area.
3. Move the pointer with the **smaller height**.
4. Continue until the pointers meet.

## Key Idea

The area is calculated by:

```text
Area = min(leftHeight, rightHeight) × width
```

The shorter line limits the amount of water.

Moving the taller line only decreases the width while the limiting height stays the same, so it cannot produce a larger area.

Therefore, always move the pointer pointing to the shorter line.

## Algorithm

1. Initialize two pointers.
2. Compute the current area.
3. Update the maximum area.
4. Move the shorter pointer inward.
5. Repeat until `left >= right`.

## Complexity

```text
Time : O(n)

Space: O(1)
```

## Pattern Learned

* Two Pointers
* Greedy
* Eliminate impossible solutions instead of checking every pair.

## Key Lesson

Instead of checking every possible pair (`O(n²)`), use two pointers to discard combinations that can never lead to a better answer, reducing the solution to `O(n)`.
