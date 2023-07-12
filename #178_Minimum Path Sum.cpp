#include <bits/stdc++.h>

/* int solve(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp) {
  if (i == 0 and j == 0)
    return grid[i][j];

  if (i < 0 or j < 0)
    return 1e9;

  if (dp[i][j] != -1)
    return dp[i][j];

  return dp[i][j] = min(grid[i][j] + solve(i - 1, j, grid, dp),
                        grid[i][j] + solve(i, j - 1, grid, dp));
}

int minSumPath(vector<vector<int>> &grid) {
  int n = grid.size(), m = grid[0].size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
  return solve(n - 1, m - 1, grid, dp);
} */

/* int minSumPath(vector<vector<int>> &grid) {
  int n = grid.size(), m = grid[0].size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == 0 and j == 0)
        dp[i][j] = grid[i][j];
      else {
        int up = 1e9, left = 1e9;
        if (i - 1 >= 0)
          up = grid[i][j] + dp[i - 1][j];
        if (j - 1 >= 0)
          left = grid[i][j] + dp[i][j - 1];

        dp[i][j] = min(left, up);
      }
    }
  }

  return dp[n - 1][m - 1];
} */

int minSumPath(vector<vector<int>> &grid) {
  int n = grid.size(), m = grid[0].size();
  vector<int> prev(m + 1, 0), curr(m + 1, 0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == 0 and j == 0)
        curr[j] = grid[i][j];
      else {
        int up = 1e9, left = 1e9;
        if (i - 1 >= 0)
          up = grid[i][j] + prev[j];
        if (j - 1 >= 0)
          left = grid[i][j] + curr[j - 1];

        curr[j] = min(left, up);
      }
    }
    prev = curr;
  }

  return prev[m - 1];
}
