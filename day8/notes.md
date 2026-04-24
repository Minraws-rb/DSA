# Day 8 - Time Complexity (Theory)

## What is Time Complexity?
Time complexity measures how the running time of an algorithm grows with input size (n).



## Why Time Complexity?
- To compare efficiency of algorithms
- To choose optimal solution
- To predict performance for large inputs

## Types of Cases

1. Best Case → Minimum time taken
2. Worst Case → Maximum time taken
3. Average Case → Expected time



## Asymptotic Notations

1. Big O (O) → Upper bound (worst case)
2. Big Omega (Ω) → Lower bound (best case)
3. Big Theta (Θ) → Exact bound


## Common Time Complexities

O(1) → Constant  
O(log n) → Logarithmic  
O(n) → Linear  
O(n log n) → Linearithmic  
O(n²) → Quadratic  


## Growth Comparison

O(1) < O(log n) < O(n) < O(n log n) < O(n²)



## Key Concepts

- Ignore constants (O(2n) = O(n))
- Ignore lower order terms (O(n² + n) = O(n²))
- Focus on dominant term



## Example

Loop from 1 to n → O(n)  
Nested loops → O(n²)  
Binary search → O(log n)

