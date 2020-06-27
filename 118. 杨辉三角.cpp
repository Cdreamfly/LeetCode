//#include"LeetCode.h"
//
//using namespace std;
///*输入: 5
//输出:
//[
// [1],
// [1,1],
// [1,2,1],
// [1,3,3,1],
// [1,4,6,4,1]
// [1,5,10,10,5,1]
//]*/
//vector<vector<int>> generate(int numRows) {
//	vector<vector<int>> ans(numRows);
//	if (numRows == 0) return ans; //若numRows为空，返回空数组
//	for (int i = 0; i < numRows; ++i) //给数组一个个赋值
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			if (j == 0 || j == i) //若是左右两边的边界，赋值为1
//				ans[i].push_back(1);
//			else
//				ans[i].push_back(ans[i - 1][j - 1] + ans[i - 1][j]);//否则赋值为该位置左上与右上的和
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	generate(5);
//	return 0;
//}