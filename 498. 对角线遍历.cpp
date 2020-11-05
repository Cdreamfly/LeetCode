//#include"LeetCode.h"
//using namespace std;
//class Solution {
//public:
//    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
//        if (matrix.empty() || matrix[0].empty()) return {};
//        vector<int> res;
//        int m = matrix.size();
//        int n = matrix[0].size();
//        int N = m * n;
//        int i = 0, j = 0;
//        while (res.size() < N) {     //总数不超过就一直走
//            while (i >= 0 && j < n)
//            {
//                res.push_back(matrix[i--][j++]); //往右上走直到走出第一行或者最后一列
//            }
//            ++i;                    //走到第一行上面去了，下移
//            if (j == n)
//            {
//                --j, ++i;    //走到最后一列右边去了，下移基础上左下移动
//            }
//            while (j >= 0 && i < m)
//            {
//                res.push_back(matrix[i++][j--]); //往左下走直到走出第一列或者最后一行
//            }
//            ++j;                    //走到第一列左边去了，左移
//            if (i == m)
//            {
//                --i, ++j;    //走到最后一行下面去了，左移基础上右上移动
//            }
//        }
//        return res;
//    }
//};
//
//int main()
//{
//
//
//	return 0;
//}