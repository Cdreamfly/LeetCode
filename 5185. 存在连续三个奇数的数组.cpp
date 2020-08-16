//#include"LeetCode.h"
//using namespace std;
///*给你一个整数数组 arr，请你判断数组中是否存在连续三个元素都是奇数的情况：如果存在，请返回 true ；否则，返回 false 。 
//
//示例 1：
//
//输入：arr = [2,6,4,1]
//输出：false
//解释：不存在连续三个元素都是奇数的情况。
//示例 2：
//
//输入：arr = [1,2,34,3,4,5,7,23,12]
//输出：true
//解释：存在连续三个元素都是奇数的情况，即 [5,7,23] 。*/
//bool threeConsecutiveOdds(vector<int>& arr) {
//	int res = 0;
//	for (int i = 0; i < arr.size(); ++i)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			++res;
//			if (res == 3)return true;
//		}
//		else
//		{
//			res = 0;
//		}
//	}
//	return false;
//}
//int main()
//{
//
//	return 0;
//}