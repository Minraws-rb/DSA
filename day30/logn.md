# O(log n) Time Complexity in Data Structures & Algorithms

## Table of Contents
- [What is O(log n)?](#what-is-olog-n)
- [Intuition: The Halving Principle](#intuition-the-halving-principle)
- [Logarithm Basics](#logarithm-basics)
- [Visual Representation](#visual-representation)
- [Common Algorithms with O(log n) Complexity](#common-algorithms-with-olog-n-complexity)
  - [1. Binary Search](#1-binary-search)
  - [2. Binary Search Tree (BST) Operations](#2-binary-search-tree-bst-operations)
  - [3. Merge Sort / Quick Sort (Recursion Depth)](#3-merge-sort--quick-sort-recursion-depth)
  - [4. Heap Operations](#4-heap-operations)
  - [5. Exponentiation by Squaring](#5-exponentiation-by-squaring)
  - [6. Finding the Number of Digits](#6-finding-the-number-of-digits)
- [O(log n) in Data Structures](#olog-n-in-data-structures)
- [Comparison: Growth Rates](#comparison-growth-rates)
- [Space Complexity Considerations](#space-complexity-considerations)
- [Real-World Analogies](#real-world-analogies)
- [Common Mistakes & Pitfalls](#common-mistakes--pitfalls)
- [Key Takeaways](#key-takeaways)

---

## What is O(log n)?

**O(log n)** — read as *"Big-O of log n"* — is a time complexity that describes algorithms whose running time grows **logarithmically** relative to the input size `n`.

In practical terms: **each step of the algorithm eliminates a constant fraction (usually half) of the remaining work.**

This makes O(log n) algorithms incredibly efficient — even for massive inputs.

| Input Size (n) | O(n) steps | O(log₂ n) steps |
|----------------|-----------|-----------------|
| 8              | 8         | 3               |
| 64             | 64        | 6               |
| 1,024          | 1,024     | 10              |
| 1,048,576      | 1,048,576 | 20              |
| 1,073,741,824  | ~1 billion| 30              |

> 💡 **Key insight:** To search 1 billion sorted elements, Binary Search needs only ~30 comparisons.

---

## Intuition: The Halving Principle

The core idea behind O(log n) is simple: **divide the problem in half at each step**.

Imagine searching for a word in a dictionary:
1. Open to the **middle page**.
2. Is your word before or after that page?
3. Discard the half where the word **cannot** be.
4. Repeat on the remaining half.

After just a few steps, you've eliminated most of the dictionary. This is the essence of logarithmic complexity.

---

## Logarithm Basics

A **logarithm** answers the question: *"How many times do I divide n by b to reach 1?"*

```
log_b(n) = x  means  b^x = n
```

In computer science, **base 2 (log₂)** is most common because we often split problems in half.

```
log₂(8)  = 3   →  2³ = 8
log₂(16) = 4   →  2⁴ = 16
log₂(32) = 5   →  2⁵ = 32
```

> 📝 In Big-O notation, the base of the logarithm doesn't matter — all logarithms differ only by a constant factor. So O(log₂ n) = O(log₁₀ n) = O(log n).

---

## Visual Representation

```
n = 16 elements
[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]

Step 1: Check middle → 8 elements remain
        [9, 10, 11, 12, 13, 14, 15, 16]

Step 2: Check middle → 4 elements remain
        [13, 14, 15, 16]

Step 3: Check middle → 2 elements remain
        [15, 16]

Step 4: Check middle → Found!

Total steps: 4 = log₂(16)
```

Each level of this "tree" halves the problem. The **depth** of such a tree is always log₂(n).

---

## Common Algorithms with O(log n) Complexity

---

### 1. Binary Search

**Problem:** Find a target value in a **sorted** array.

**Strategy:** Repeatedly halve the search space.

```python
def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == target:
            return mid          # Found at index mid
        elif arr[mid] < target:
            left = mid + 1      # Target is in right half
        else:
            right = mid - 1     # Target is in left half

    return -1  # Not found


# Example
arr = [2, 5, 8, 12, 16, 23, 38, 45, 67, 90]
print(binary_search(arr, 23))  # Output: 5
print(binary_search(arr, 10))  # Output: -1
```

**Trace for target = 23:**
```
arr = [2, 5, 8, 12, 16, 23, 38, 45, 67, 90]
       0  1  2   3   4   5   6   7   8   9

Step 1: left=0, right=9, mid=4 → arr[4]=16 < 23 → left=5
Step 2: left=5, right=9, mid=7 → arr[7]=45 > 23 → right=6
Step 3: left=5, right=6, mid=5 → arr[5]=23 == 23 → return 5 ✓

Total comparisons: 3 (out of 10 elements)
```

**Why O(log n)?** Each iteration halves the search range. Starting from n, we reach 1 in log₂(n) steps.

---

### 2. Binary Search Tree (BST) Operations

**Problem:** Insert, search, or delete a value in a BST.

**Strategy:** At each node, go left if smaller, right if larger.

```python
class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None

    def insert(self, val):
        if not self.root:
            self.root = Node(val)
        else:
            self._insert(self.root, val)

    def _insert(self, node, val):
        if val < node.val:
            if node.left is None:
                node.left = Node(val)
            else:
                self._insert(node.left, val)   # Go left
        else:
            if node.right is None:
                node.right = Node(val)
            else:
                self._insert(node.right, val)  # Go right

    def search(self, val):
        return self._search(self.root, val)

    def _search(self, node, val):
        if node is None:
            return False
        if node.val == val:
            return True
        elif val < node.val:
            return self._search(node.left, val)   # O(log n) per level
        else:
            return self._search(node.right, val)


# Example
bst = BST()
for v in [10, 5, 15, 3, 7, 12, 20]:
    bst.insert(v)

print(bst.search(7))   # True
print(bst.search(9))   # False
```

**BST Structure:**
```
        10
       /  \
      5    15
     / \   / \
    3   7 12  20
```

**Why O(log n)?** In a balanced BST, each node comparison eliminates half the tree. The height of a balanced BST with n nodes is log₂(n).

> ⚠️ **Note:** In the worst case (a skewed/degenerate tree), BST operations degrade to O(n). Balanced BSTs (AVL Tree, Red-Black Tree) guarantee O(log n).

---

### 3. Merge Sort / Quick Sort (Recursion Depth)

While Merge Sort's overall complexity is **O(n log n)**, the **log n** factor comes from the recursion depth — the number of times the array is halved.

```python
def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left  = merge_sort(arr[:mid])   # Recurse on left half  → log n levels
    right = merge_sort(arr[mid:])   # Recurse on right half → log n levels

    return merge(left, right)       # O(n) merge at each level


def merge(left, right):
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i]); i += 1
        else:
            result.append(right[j]); j += 1
    result.extend(left[i:])
    result.extend(right[j:])
    return result


# Example
arr = [38, 27, 43, 3, 9, 82, 10]
print(merge_sort(arr))  # [3, 9, 10, 27, 38, 43, 82]
```

**Recursion Tree (n=8):**
```
Level 0:  [8 elements]                    → 1 call
Level 1:  [4 elements] [4 elements]       → 2 calls
Level 2:  [2][2]       [2][2]             → 4 calls
Level 3:  [1][1][1][1] [1][1][1][1]       → 8 calls (base case)

Depth = log₂(8) = 3
```

The log n levels × O(n) work per level = **O(n log n)** total.

---

### 4. Heap Operations

A **Binary Heap** is a complete binary tree. Its height is always `floor(log₂ n)`.

```python
import heapq

# Min-Heap using Python's heapq
heap = []

# Insert (heappush) → O(log n)
# Element bubbles UP to maintain heap property
heapq.heappush(heap, 10)
heapq.heappush(heap, 4)
heapq.heappush(heap, 7)
heapq.heappush(heap, 1)

print(heap)  # [1, 4, 7, 10]

# Extract min (heappop) → O(log n)
# Root is removed, last element placed at root, bubbles DOWN
min_val = heapq.heappop(heap)
print(min_val)  # 1
print(heap)     # [4, 10, 7]
```

**Why O(log n)?** During push/pop, the element traverses at most the tree's height, which is log₂(n).

```
Heap with 7 nodes → height = floor(log₂ 7) = 2

        1          ← Level 0
       / \
      4   7        ← Level 1
     / \ / \
   10  _ _  _      ← Level 2
```

---

### 5. Exponentiation by Squaring

**Problem:** Compute `base^exp` efficiently.

**Naive approach:** O(n) — multiply base by itself n times.
**Fast approach:** O(log n) — repeatedly **square** the base.

```python
def fast_power(base, exp):
    """
    Compute base^exp in O(log exp) time.
    Key insight: base^exp = (base^2)^(exp/2) if exp is even
                          = base * base^(exp-1) if exp is odd
    """
    if exp == 0:
        return 1
    if exp % 2 == 0:
        half = fast_power(base, exp // 2)
        return half * half          # Square the result
    else:
        return base * fast_power(base, exp - 1)


# Example
print(fast_power(2, 10))   # 1024
print(fast_power(3, 5))    # 243

# Trace for 2^10:
# fast_power(2, 10) → half = fast_power(2, 5) → half * half
#   fast_power(2, 5) → 2 * fast_power(2, 4)
#     fast_power(2, 4) → half = fast_power(2, 2) → half * half
#       fast_power(2, 2) → half = fast_power(2, 1) → half * half
#         fast_power(2, 1) → 2 * fast_power(2, 0) = 2 * 1 = 2
# Total recursive calls: 5 = ~log₂(10)
```

---

### 6. Finding the Number of Digits

**Problem:** How many digits does a number `n` have?

```python
import math

def count_digits(n):
    if n == 0:
        return 1
    return math.floor(math.log10(abs(n))) + 1

# Examples
print(count_digits(1))       # 1  → log10(1) + 1 = 0 + 1 = 1
print(count_digits(99))      # 2  → log10(99) + 1 ≈ 1.99 + 1 = 2
print(count_digits(1000))    # 4  → log10(1000) + 1 = 3 + 1 = 4
print(count_digits(1000000)) # 7
```

The number of digits in `n` is `floor(log₁₀(n)) + 1` — a direct application of logarithms.

---

## O(log n) in Data Structures

| Data Structure       | Operation       | Average Case | Worst Case   | Notes                            |
|----------------------|-----------------|-------------|--------------|----------------------------------|
| Sorted Array         | Binary Search   | O(log n)    | O(log n)     | Array must be sorted             |
| BST (Balanced)       | Search/Insert/Delete | O(log n) | O(log n)  | AVL, Red-Black guarantee balance |
| BST (Unbalanced)     | Search/Insert/Delete | O(log n) | O(n)      | Degrades if not balanced         |
| Binary Heap          | Insert / Extract | O(log n)   | O(log n)     | Used in Priority Queues          |
| Segment Tree         | Query / Update  | O(log n)    | O(log n)     | Range queries on arrays          |
| Fenwick Tree (BIT)   | Prefix Sum Query/Update | O(log n) | O(log n) | Efficient prefix sums         |
| Skip List            | Search/Insert   | O(log n)    | O(n)         | Probabilistic data structure     |
| Trie                 | Search/Insert   | O(m)        | O(m)         | m = key length, not n            |

---

## Comparison: Growth Rates

How fast does each complexity grow as `n` increases?

```
n       O(1)  O(log n)  O(n)    O(n log n)  O(n²)
-----   ----  --------  ------  ----------  ---------
1       1     0         1       0           1
4       1     2         4       8           16
8       1     3         8       24          64
16      1     4         16      64          256
64      1     6         64      384         4,096
256     1     8         256     2,048       65,536
1,024   1     10        1,024   10,240      1,048,576
1M      1     20        1M      20M         1 trillion
1B      1     30        1B      30B         10^18
```

```
Growth Rate (slowest → fastest):
O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)
      ^^^^^^^^
      Very efficient!
```

---

## Space Complexity Considerations

O(log n) often appears in **space complexity** too, especially with recursive algorithms.

```python
# Binary Search (Iterative) → O(1) space
def binary_search_iterative(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target: return mid
        elif arr[mid] < target: left = mid + 1
        else: right = mid - 1
    return -1

# Binary Search (Recursive) → O(log n) space (call stack)
def binary_search_recursive(arr, target, left, right):
    if left > right:
        return -1
    mid = (left + right) // 2
    if arr[mid] == target:
        return mid
    elif arr[mid] < target:
        return binary_search_recursive(arr, target, mid + 1, right)  # stack frame
    else:
        return binary_search_recursive(arr, target, left, mid - 1)   # stack frame
```

| Version    | Time       | Space      |
|------------|------------|------------|
| Iterative  | O(log n)   | **O(1)**   |
| Recursive  | O(log n)   | **O(log n)** ← call stack depth |

---

## Real-World Analogies

### 📖 Dictionary Search
A dictionary has 100,000 words. To find a word:
- **Linear search:** up to 100,000 page flips.
- **Binary search:** at most **17 steps** (log₂(100,000) ≈ 17).

### 🎮 Guess the Number Game
"I'm thinking of a number between 1 and 1,000,000."
- Always guess the **midpoint** of the remaining range.
- You'll find it in at most **20 guesses** (log₂(1,000,000) ≈ 20).

### 📁 File System Directories
A balanced directory tree with millions of files — navigating from root to any file takes only log n folder traversals.

### 🔍 Phone Book
Searching for a name in a 500-page phone book by repeatedly opening to the middle page takes at most **9 steps** (log₂(500) ≈ 9).

---

## Common Mistakes & Pitfalls

### ❌ Mistake 1: Assuming BST is always O(log n)
```python
# This degenerate BST is O(n), not O(log n)!
bst = BST()
for v in [1, 2, 3, 4, 5, 6, 7]:  # Sorted insertion
    bst.insert(v)

# Results in a linked list, not a balanced tree:
# 1 → 2 → 3 → 4 → 5 → 6 → 7
# Search becomes O(n)!
```
**Fix:** Use self-balancing trees (AVL, Red-Black) or shuffle input before insertion.

### ❌ Mistake 2: Binary Search on Unsorted Array
```python
arr = [5, 3, 8, 1, 9, 2]  # Unsorted!
# Binary search here gives WRONG results
# Always sort first: O(n log n), then search: O(log n)
arr.sort()
binary_search(arr, 8)
```

### ❌ Mistake 3: Integer Overflow in Mid Calculation
```python
# WRONG (can overflow in some languages like Java/C++)
mid = (left + right) // 2

# CORRECT (safe from overflow)
mid = left + (right - left) // 2
```

### ❌ Mistake 4: Off-by-one Errors
```python
# These subtle bugs cause infinite loops or missed elements:
while left < right:   # ← Bug: misses when left == right
while left <= right:  # ← Correct
```

---

## Key Takeaways

1. **O(log n) = divide and conquer** — each step eliminates a fraction of the problem.

2. **The base of the logarithm doesn't matter** in Big-O — log₂ n and log₁₀ n are both O(log n).

3. **O(log n) is extremely efficient** — even for n = 1 billion, log₂(n) ≈ 30 steps.

4. **Common triggers for O(log n):**
   - Sorted data + halving search space → Binary Search
   - Tree height traversal → BST, Heap, Segment Tree
   - Repeated squaring / halving → Fast Exponentiation
   - Divide & conquer recursion depth

5. **Balanced trees are crucial** — unbalanced BSTs degrade to O(n). Use AVL or Red-Black trees for guaranteed O(log n).

6. **Iterative > Recursive** for space: recursive O(log n) algorithms use O(log n) stack space; iterative versions use O(1).

---

*Happy Coding! ⚡ — Mastering O(log n) is mastering the art of efficient problem decomposition.*