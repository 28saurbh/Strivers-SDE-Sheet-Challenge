#include <bits/stdc++.h>

// The given code appears to be an implementation of the Pascal's Triangle using nested vectors in C++. The `printPascal` function takes an integer `n` as input and returns a 2D vector representing the Pascal's Triangle up to the `n`th row.

// The `row` function is a helper function used by `printPascal` to generate each row of the triangle. It takes an integer `n` as input and returns a vector containing the elements of the `n`th row of the triangle.

// Here's a step-by-step explanation of how the code works:

// 1. The `printPascal` function initializes an empty 2D vector called `ans` to store the Pascal's Triangle.
// 2. It then iterates from `i=1` to `n` and calls the `row` function to generate each row of the triangle.
// 3. The `row` function initializes an empty vector called `temp` to store the elements of the current row.
// 4. It starts by pushing `1` to `temp`, as the first element of each row in Pascal's Triangle is always `1`.
// 5. It then calculates the remaining elements of the row using the formula `(n-i)! / (i!)`, where `n` is the row number and `i` is the current index.
// 6. The calculation is performed using the variables `ans`, which stores the intermediate result, and the `ans` variable is updated in each iteration.
// 7. The calculated element is then pushed to the `temp` vector.
// 8. After the loop completes, the `temp` vector representing the current row is pushed to the `ans` vector, which stores all the rows of the Pascal's Triangle.
// 9. Finally, when all the rows have been generated, the `ans` vector is returned as the output of the `printPascal` function.

// Overall, the code generates each row of the Pascal's Triangle by calculating the elements using the binomial coefficient formula `(n-i)! / (i!)`, where `n` is the row number and `i` is the current index. It then stores each row in a 2D vector and returns the complete Pascal's Triangle.



vector<long long int> row(int n){
  vector<long long int> temp;
  temp.push_back(1);
  long long ans = 1;
  
  for(int i=1; i<n; i++){
    ans = ans * (n-i);
    ans = ans / i;
    temp.push_back(ans);  
  }
  return temp;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
  
  for(int i=1; i<=n; i++){
    ans.push_back(row(i));
  }
  return ans;
}
