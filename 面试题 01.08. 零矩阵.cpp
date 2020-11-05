//#include"LeetCode.h"
//using namespace std;
///*编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。
// 
//示例 1：
//
//输入：
//[
//  [1,1,1],
//  [1,0,1],
//  [1,1,1]
//]
//输出：
//[
//  [1,0,1],
//  [0,0,0],
//  [1,0,1]
//]
//*/
//void setZeroes(vector<vector<int>>& matrix) {
//	int ROW = matrix.size();
//	int COL = matrix[0].size();
//	vector<bool>row(ROW, false);
//	vector<bool>col(COL, false);
//	for (int i = 0; i < matrix.size(); ++i)
//	{
//		for (int j = 0; j < matrix[i].size(); ++j)
//		{
//			if (matrix[i][j] == 0)
//			{
//				row[i] = true;
//				col[j] = true;
//			}
//		}
//	}
//
//	for (int i = 0; i < ROW; ++i)
//	{
//		for (int j = 0; j < COL; ++j)
//		{
//			if (row[i] || col[j])
//			{
//				matrix[i][j] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//
//	return 0;
//}