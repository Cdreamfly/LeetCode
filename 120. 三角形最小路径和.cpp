#include"LeetCode.h"
using namespace std;
/*给定一个三角形，找出自顶向下的最小路径和。每一步只能移动到下一行中相邻的结点上。

相邻的结点 在这里指的是 下标 与 上一层结点下标 相同或者等于 上一层结点下标 + 1 的两个结点。

 

例如，给定三角形：

[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
自顶向下的最小路径和为 11（即，2 + 3 + 5 + 1 = 11）。
*/
int minimumTotal(vector<vector<int>>& triangle) { 
    vector<int>dp(triangle.size() + 1, 0);
    for (int i = triangle.size() - 1; i >= 0; --i)
    {
        for (int j = 0; j < triangle[i].size(); ++j)
        {
            dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
        }
    }
    return dp[0];
}
int main()
{


    return 0;
}