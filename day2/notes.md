# Day 2 - Linked List (Theory)

## What is a Linked List?
A linked list is a linear data structure where elements are stored in nodes, and each node points to the next node.

Unlike arrays, elements are NOT stored in continuous memory locations.

---

## Why Linked List?
Linked lists are used because:
- They are dynamic in size
- Easy insertion and deletion
- No need for continuous memory allocation

---

## Structure of a Node
Each node contains:
- Data (value)
- Pointer to next node

---

## Types of Linked List
1. Singly Linked List → one direction (forward only)
2. Doubly Linked List → forward and backward
3. Circular Linked List → last node connects to first node

---

## Array vs Linked List

| Feature | Array | Linked List |
|--------|------|------------|
| Memory | Continuous | Non-continuous |
| Size | Fixed | Dynamic |
| Access | Fast (O(1)) | Slow (O(n)) |
| Insertion | Slow | Fast |

---

## Key Idea
Linked lists are useful when:
- You don’t know the size in advance
- You need frequent insertion/deletion