# Session 11 — Group Anagrams

## Problem

LeetCode 49 — Group Anagrams

Given an array of strings, group all anagrams together.

Example:

    ["eat","tea","tan","ate","nat","bat"]

Possible output:

    [
        ["eat","tea","ate"],
        ["tan","nat"],
        ["bat"]
    ]

---

## Pattern

HashMap + Frequency Signature

---

## Key Idea

Two strings are anagrams if they contain exactly the same
characters with the same frequencies.

For example:

    "eat"
    "tea"
    "ate"

All have:

    a → 1
    e → 1
    t → 1

Therefore they should have the same HashMap key.

---

## Algorithm

For every string:

1. Create a frequency array of size 26.
2. Count every character.
3. Convert the frequency array into a string key.
4. Use the key in a HashMap.
5. Add the original string to that group.

Example:

    "eat"

Frequency:

    [1,0,0,0,1,0,...,1]

Key:

    "1#0#0#0#1#0#...#1#"

For:

    "tea"

we get exactly the same key.

Therefore:

    key → ["eat", "tea"]

---

## Why Does It Work?

Anagrams always have identical character frequencies.

Therefore:

    same frequency signature
            ↓
       same HashMap key
            ↓
        same group

---

## Complexity

Let:

    n = number of strings
    k = average string length

For each string we scan its characters:

    O(k)

Creating the 26-character frequency signature is:

    O(26) → O(1)

Overall:

    O(n × k)

Space:

    O(n × k)

because the HashMap stores the groups and their keys.

