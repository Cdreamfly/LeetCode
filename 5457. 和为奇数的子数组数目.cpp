#include"LeetCode.h"
using namespace std;
/*示例 1：

输入：arr = [1,3,5]
输出：4
解释：所有的子数组为 [[1],[1,3],[1,3,5],[3],[3,5],[5]] 。
所有子数组的和为 [1,4,9,3,8,5].
奇数和包括 [1,9,3,5] ，所以答案为 4 。
示例 2 ：

输入：arr = [2,4,6]
输出：0
解释：所有子数组为 [[2],[2,4],[2,4,6],[4],[4,6],[6]] 。
所有子数组和为 [2,6,12,4,10,6] 。
所有子数组和都是偶数，所以答案为 0 。
示例 3：

输入：arr = [1,2,3,4,5,6,7]
输出：16*/
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long mod = 1e9 + 7;
        long long ans = 0;
        int odd = 0;
        int even = 0;

        for (auto v : arr) {
            if (v % 2 == 0) {
                even++;
            }
            else {
                int t = odd;
                odd = even + 1;
                even = t;
            }
            ans = (ans + odd) % mod;
        }
        return ans;
    }
};
int main()
{


	return 0;
}