# Session 6 — Longest Repeating Character Replacement

## Problem

LeetCode 424 — Longest Repeating Character Replacement

Given a string containing uppercase English letters and an integer `k`,
find the length of the longest substring that can be made to contain
only one distinct character by replacing at most `k` characters.

Example:

s = "AABABBA"
k = 1

Answer = 4

---

## Pattern

**Sliding Window + Frequency Counting**

---

## Key Idea

For the current window:

    windowLength = right - left + 1

Let:

    maxCount = frequency of the most frequent character

The number of replacements needed is:

    windowLength - maxCount

The window is valid when:

    windowLength - maxCount <= k

If:

    windowLength - maxCount > k

the window is invalid, so move `left` forward.

---

## Algorithm

1. Start `left = 0`.
2. Move `right` through the string.
3. Increase the frequency of `s[right]`.
4. Update `maxCount`.
5. If the window needs more than `k` replacements:
   - decrease the frequency of `s[left]`
   - move `left` forward
6. Update the maximum window length.

---

## Important Detail

We do NOT need to decrease `maxCount` when moving `left`.

`maxCount` may become temporarily stale, but the algorithm
still produces the correct maximum answer.

This allows the solution to remain `O(n)`.

---

## Complexity

Time: `O(n)`

Space: `O(26)` → `O(1)`
