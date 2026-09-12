# Session 7 — Longest Consecutive Sequence

## Problem

LeetCode 128 — Longest Consecutive Sequence

Given an unsorted array, find the length of the longest consecutive
sequence.

Example:

    [100, 4, 200, 1, 3, 2]

Answer:

    4

Because:

    1 → 2 → 3 → 4

---

## Pattern

HashSet + Sequence Start Detection

---

## Key Idea

Put all numbers into a HashSet.

For every number `num`, only start counting if:

    num - 1 does NOT exist

This means `num` is the beginning of a sequence.

Then keep checking:

    num + 1
    num + 2
    num + 3
    ...

until the sequence ends.

---

## Example

Array:

    [100, 4, 200, 1, 3, 2]

HashSet:

    {100, 4, 200, 1, 3, 2}

For `1`:

    0 does not exist

Therefore `1` is the start.

Check:

    2 → exists
    3 → exists
    4 → exists
    5 → does not exist

Sequence length = 4.

---

## Why Check `num - 1`?

Suppose we are at `2`.

If `1` exists, then `2` is NOT the beginning.

The sequence was already started from `1`.

This prevents repeatedly scanning the same sequence.

---

## Algorithm

1. Put all numbers into a HashSet.
2. Iterate through the numbers.
3. If `num - 1` does not exist:
   - `num` is the beginning of a sequence.
4. Keep checking `num + 1`.
5. Count the sequence length.
6. Keep the maximum length.

---

## Complexity

HashSet lookup:

    O(1) average

Overall:

    O(n) average time

Space:

    O(n)



