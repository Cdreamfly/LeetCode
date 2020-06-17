//#include"LeetCode.h"
//using namespace std;
///*给定正整数数组 A，A[i] 表示第 i 个观光景点的评分，并且两个景点 i 和 j 之间的距离为 j - i。
//
//一对景点（i < j）组成的观光组合的得分为（A[i] + A[j] + i - j）：景点的评分之和减去它们两者之间的距离。
//
//返回一对观光景点能取得的最高分。
//
//示例：
//
//输入：[8,1,5,2,6]
//输出：11
//解释：i = 0, j = 2, A[i] + A[j] + i - j = 8 + 5 + 0 - 2 = 11*/
//int maxScoreSightseeingPair(vector<int>& A) {
//	int ret = 0;
//	for (int i = 0; i < A.size() - 1; ++i)
//	{
//		for (int j = i + 1; j < A.size(); ++j)
//		{
//			int tmp = A[i] + A[j] + i - j;
//			if (tmp < 0)
//			{
//				break;
//			}
//			if (tmp > ret)
//			{
//				ret = tmp;
//			}
//		}
//	}
//	return ret;
//}
//int main()
//{
//
//
//	return 0;
//}