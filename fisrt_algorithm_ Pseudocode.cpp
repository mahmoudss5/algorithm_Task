Input: Integer n, and a matrix A of size n x n
Output: Absolute difference between the two diagonal sums

Initialize sum1 ← 0
Initialize sum2 ← 0

For i ← 0 to n - 1 do:
    sum1 ← sum1 + A[i][i]           
    sum2 ← sum2 + A[i][n - 1 - i]   

Return |sum1 - sum2|
