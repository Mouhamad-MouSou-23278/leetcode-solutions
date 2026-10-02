# LC347 — Top K Frequent Elements

## Pattern
HashMap + Min Heap

## Idea

1. Count the frequency of every number using a HashMap.
2. Use a min-heap ordered by frequency.
3. Keep only `k` elements in the heap.
4. If a new element has a higher frequency than the smallest element:
   - Remove the smallest.
   - Add the new element.
5. The heap contains the `k` most frequent elements.

## Why Min Heap?

We only care about the top `k`.

The smallest frequency among our current `k` elements should be
easy to remove.

Therefore, use a min-heap.

## Example

nums = [1,1,1,2,2,3]
k = 2

Frequencies:

1 -> 3
2 -> 2
3 -> 1

Heap keeps:

1 -> 3
2 -> 2

Result:

[1, 2]

## Complexity

Let `n` = number of elements.

HashMap:
- Time: O(n)
- Space: O(n)

Heap:
- Time: O(n log k)
- Space: O(k)

Total:
- Time: O(n log k)
- Space: O(n + k)

## Interview Explanation

"I first count each number using a hash map.
Then I maintain a min-heap of size k.
The heap contains the k most frequent elements seen so far.
Because the heap is a min-heap, the least frequent element is always
at the top and can be removed when a better candidate appears."

## Important

There is also a Bucket Sort solution that achieves:

Time: O(n)
Space: O(n)

But the min-heap solution is O(n log k) and is an excellent
interview solution because it generalizes well to Top-K problems.

## Commit

