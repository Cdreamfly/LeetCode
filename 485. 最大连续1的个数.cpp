//#include"LeetCode.h"
//
//using namespace std;
//
///*
//给定一个二进制数组， 计算其中最大连续1的个数。
//
//示例 1:
//
//输入: [1,1,0,1,1,1]
//输出: 3
//解释: 开头的两位和最后的三位都是连续1，所以最大连续1的个数是 3.
//*/
//
//int findMaxConsecutiveOnes(vector<int>& nums) {
//	int ret = 0;
//	int count = 0;
//	for (int i = 0; i < nums.size(); ++i)
//	{
//		if (nums[i] == 1)
//		{
//			++count;
//		}
//		else
//		{
//			count = 0;
//		}
//		ret = max(ret, count);
//	}
//	return ret;
//}
//
//int main()
//{
//	return 0;
//}