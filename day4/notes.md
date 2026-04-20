# Day 4 - Stack (Theory)

## What is a Stack?
A stack is a linear data structure that follows:
LIFO (Last In First Out)
The last element inserted is the first one to be removed.


## Basic Operations
1. Push → Insert element
2. Pop → Remove element
3. Peek/Top → View top element
4. isEmpty → Check if stack is empty

## Example
Push: 10, 20, 30
Stack:
Top → 30
       20
       10

Pop → removes 30 first

## Applications of Stack
- Function calls (call stack)
- Expression evaluation
- Undo/Redo operations
- Parenthesis checking


## Implementation
Stack can be implemented using:
- Array
- Linked List


## Key Idea
- Insertion and deletion happen only at one end (Top)
- Time complexity for push/pop is O(1)