# Day 5 - Queue (Theory)

## What is a Queue?
A queue is a linear data structure that follows:

FIFO (First In First Out)

The first element inserted is the first one to be removed.


## Basic Operations

1. Enqueue → Insert element (at rear)
2. Dequeue → Remove element (from front)
3. Front → View first element
4. Rear → View last element
5. isEmpty → Check if queue is empty


## Example

Enqueue: 10, 20, 30

Queue:
Front → 10 20 30 ← Rear

Dequeue → removes 10 first

## Types of Queue

1. Linear Queue
2. Circular Queue
3. Double Ended Queue (Deque)
4. Priority Queue


## Applications of Queue

- CPU scheduling
- Printer queue
- BFS (Breadth First Search)
- Waiting line systems


## Key Idea

- Insertion happens at rear
- Deletion happens at front
- Time complexity for enqueue/dequeue is O(1)