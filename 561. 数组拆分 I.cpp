//#include"leetcode.h"
///*
//给定长度为 2n 的数组, 你的任务是将这些数分成 n 对, 例如 (a1, b1), (a2, b2), ..., (an, bn) ，使得从1 到 n 的 min(ai, bi) 总和最大。
//
//示例 1:
//
//输入: [1,4,3,2]
//
//输出: 4
//解释: n 等于 2, 最大总和为 4 = min(1, 2) + min(3, 4).
//*/
//int arrayPairSum(vector<int>& nums) {
//	/*int i = 0;
//	int j = 1;
//	int sum = 0;
//	sort(nums.begin(),nums.end());
//	while (j < nums.size())
//	{
//		sum += min(nums[i], nums[j]);
//		i += 2;
//		j += 2;
//	}
//	return sum;*/
//	int sum = 0;
//	sort(nums.begin(), nums.end());
//	for (int i = 0; i < nums.size(); i += 2)
//	{
//		num += nums[i];
//	}
//	return sum;
//}
//int main()
//{
//
//	return 0;
//}