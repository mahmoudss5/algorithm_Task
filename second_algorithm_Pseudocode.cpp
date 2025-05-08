Input: Integer n, and a matrix A of size n x n
Output: Absolute difference between the two diagonal sums

Initialize sum1 ← 0
Initialize sum2 ← 0

Function Rec(i, j):
    sum1 ← sum1 + A[i][j]
    If i = n - 1 and j = 0:
        return
    Rec(i + 1, j - 1)

Function Rec2(i, j):
    sum2 ← sum2 + A[i][j]
    If i = n - 1 and j = n - 1:
        return
    Rec2(i + 1, j + 1)

Call Rec(0, n - 1)
Call Rec2(0, 0)

Return |sum1 - sum2|
