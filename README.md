# Merge Sort

Algorithmic implementation of the merge sort routine

Algorithm :-

1. Base case:- if length of A = 1, return A

2. Recursively sort 1st half of A.

3. Recursively sort 2nd half of A.

4. Merge(1st half, 2nd half)

  - C = Output array (length n)
  
  - A = 1st sorted half (index i)
  
  - B = 2nd sorted half (index j)
  
  - i, j = 0
  
  - for k = 0 to n-1
  
  - if A[i] <= B[j]
  -    c[k] = A[i]
  -    ++i
  
  - else
  -    c[k] = B[j]
  -    ++j
  
  - end