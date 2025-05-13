#include <bits/stdc++.h>
using namespace std;
  // recursive algorithm with lamda function  and 2d vectors :
    signed main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));  // vector (linked list)  to take the input 

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }  // the total time for this block is o(n^2)

    int sum1 = 0, sum2 = 0;  // intialize two variables to get the sum of the two main diagonals 

    function<void(int, int)> rec = [&](int i, int j) {   //  first function to get the sum of the  second main diagonal 
        sum1 += a[i][j]; //  basic operation 
        if (i == n - 1 && j == 0) return;   // the base case >> we can make the condtion  hust with one of them   
        rec(i + 1, j - 1);       // the transtion  >> inedexes of the diagonals elemnts   [0][n-1]  >>  [1][n-2]    
    };
   // the total time for  this block is  o(n) 
    function<void(int, int)> rec2 = [&](int i, int j) {  // the second function to get the first main diagonal 
        sum2 += a[i][j]; // basic  operation 
        if (i == n - 1 && j == n - 1) return;  // the base case 
        rec2(i + 1, j + 1); // the transtion >> inedexes of the diagonals elemnts  [0] [0] >> [1][1] 
    };
     // the total time for  this block is  o(n) 
    rec(0, n - 1);
    rec2(0, 0);
    cout << abs(sum1 - sum2) << endl;
  // the total time for all of the code is o(n^2) and o(n) for the algorithm 
    return 0;
}
/*

T(n)=T(n−1)+1  t(1)=1;
 =(T(n−2)+1)+1
=T(n−2)+2
=(T(n−3)+1)+2
=T(n−3)+3
⋮
=T(n−k)+k

Set 
𝑘=𝑛 
k=n, then:
𝑇(𝑛)=𝑇(0)+𝑛
T(n)=T(0)+n
 
by master addition : 
the equtaion form :   T(n)=at(n-b)+f(n)    
  T(n)=T(n−1)+1  t(1)=1;
   a= 1 b=1   f(n)=1
 a = 1 so this is the second case 
 the the time here will be   o(n*f(n)) = o(n * 1) =  o(n)

*/


