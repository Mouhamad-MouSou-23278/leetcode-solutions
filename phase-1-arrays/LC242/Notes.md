# Session 10 — Valid Anagram

## Problem

LeetCode 242 — Valid Anagram

Given two strings `s` and `t`, determine whether `t` is an
anagram of `s`.

An anagram contains exactly the same characters with exactly
the same frequencies.

Example:

    s = "anagram"
    t = "nagaram"

    Output: true

Example:

    s = "rat"
    t = "car"

    Output: false

---

## Pattern

Frequency Counting

---

## Key Idea

If two strings are anagrams, every character must appear the
same number of times in both strings.

For lowercase English letters, there are only 26 possible
characters.

Therefore we can use:

    int count[26]

Instead of a HashMap.

---

## Algorithm

First check the lengths.

If:

    s.length() != t.length()

then they cannot be anagrams.

Otherwise:

For every character:

    count[s[i] - 'a']++

    count[t[i] - 'a']--

At the end, every value must be:

    0

If any value is not zero, the strings are not anagrams.

---

## Example

    s = "aabb"
    t = "abab"

Process:

    a → +1
    a → +1

    a → -1
    b → -1

After processing all characters:

    a = 0
    b = 0

Therefore:

    true

---

## Why One Array Works

We don't need two frequency arrays.

For every character:

    +1 for s
    -1 for t

If the frequencies are equal, everything cancels to zero.

---

## Complexity

Let `n` be the length of the strings.

Time:

    O(n)

Space:

    O(26)

Since 26 is constant:

    O(1)

---

## Why Not HashMap?

If the problem guarantees:

    lowercase English letters

then a fixed array of size 26 is simpler and faster.

If the problem allows arbitrary Unicode characters or a much
larger character set, a HashMap/dictionary may be more appropriate.


