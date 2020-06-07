//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*在一个给定的数组nums中，总是存在一个最大元素 。
//
//查找数组中的最大元素是否至少是数组中每个其他数字的两倍。
//
//如果是，则返回最大元素的索引，否则返回-1。
//
//示例 1:
//
//输入: nums = [3, 6, 1, 0]
//输出: 1
//解释: 6是最大的整数, 对于数组中的其他整数,
//6大于数组中其他元素的两倍。6的索引是1, 所以我们返回1.
//*/
//int dominantIndex(vector<int>& nums)
//{
//	if (nums.size() == 1)return 0;
//	vector<int>capy(nums.begin(), nums.end());
//	sort(nums.begin(), nums.end(), greater<int>());
//	if (nums[0] >= nums[1] * 2)
//	{
//		for (int i = 0; i < capy.size(); ++i)
//		{
//			if (nums[0] == capy[i])return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	vector<int>v{  1, 0 };
//	cout<<dominantIndex(v);
//	return 0;
//}