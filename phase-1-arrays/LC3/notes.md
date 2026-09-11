# Longest Substring Without Repeating Characters

## Pattern

**Sliding Window + HashMap**

## Approach

Use two pointers:

* `left` = beginning of the window
* `right` = end of the window

Store the **last index** of every character in a HashMap.

For every character:

1. Check if we have seen it before.
2. If its previous index is inside the current window, move `left`.
3. Update the character's latest index.
4. Calculate the current window length.
5. Update the maximum length.

## Key Idea

If a duplicate character is found:

```text
left = previousIndex + 1
```

This removes the duplicate from the current window without starting again from the beginning.

## Important

Only move `left` if:

```text
previousIndex >= left
```

Otherwise, the previous occurrence is already outside the current window.

## Complexity

```text
Time : O(n)

Space: O(n)
```

## Pattern Learned

**Sliding Window**

The window expands with `right` and moves `left` forward when the window becomes invalid.

## Key Lesson

Instead of rebuilding the substring for every starting position, maintain a valid window and update it as we move through the string.
