# Session 8 — Product of Array Except Self

## Problem

LeetCode 238 — Product of Array Except Self

For every index `i`, return the product of every element except
`nums[i]`.

Example:

    [1, 2, 3, 4]

Output:

    [24, 12, 8, 6]

---

## First Attempt

A simple approach is:

1. Calculate the product of all elements.
2. Divide by `nums[i]`.

This can work with zero handling, but LeetCode requires:

    Do NOT use division.

So we need another approach.

---

## Pattern

Prefix Product + Suffix Product

---

## Key Idea

For every index:

    answer[i] =
        product of everything before i
        ×
        product of everything after i

Example:

    [1, 2, 3, 4]

For index `2`:

    left  = 1 × 2 = 2
    right = 4

Therefore:

    answer[2] = 2 × 4 = 8

---

## Step 1 — Prefix Products

Store the product of all elements before the current index.

For:

    [1, 2, 3, 4]

The prefix values are:

    index:   0   1   2   3
    prefix:  1   1   2   6

At index `i`, answer initially contains the product
of everything before `i`.

---

## Step 2 — Suffix Products

Walk from right to left.

Keep:

    suffix = product of everything after i

Multiply:

    answer[i] *= suffix

Then update:

    suffix *= nums[i]

---

## Why It Works

For every index:

    answer[i] =
        prefix product × suffix product

The current element is never included in either side.

Therefore it is automatically excluded.

---

## Example

Input:

    [1, 2, 3, 4]

After prefix pass:

    [1, 1, 2, 6]

After suffix pass:

    [24, 12, 8, 6]

Final:

    [24, 12, 8, 6]

---

## Zero Handling

We don't need special zero handling.

The prefix/suffix approach handles zeros naturally.

Example:

    [1, 2, 0, 4]

Result:

    [0, 0, 8, 0]

---

## Complexity

Time:

    O(n)

Space:

    O(1) extra space

The output array does not count as extra space according to
the usual LeetCode requirement.


