//#include<iostream>
//#include<vector>
//using namespace std;
///*输入:
//nums = [1, 7, 3, 6, 5, 6]
//输出 : 3
//解释 :
//	索引3(nums[3] = 6) 的左侧数之和(1 + 7 + 3 = 11)，与右侧数之和(5 + 6 = 11)相等。
//	同时, 3 也是第一个符合要求的中心索引。
//*/
//
//int pivotIndex(vector<int>& nums) 
//{
//	int sum = 0;
//	int n = 0;
//	for (int i = 0; i < nums.size(); ++i)
//	{
//		sum += nums[i];
//	}
//
//	for (int i = 0; i < nums.size(); ++i)
//	{
//		if ((sum - n) - nums[i] == n)return i;
//		n += nums[i];
//	}
//	return -1;
//}
//
//int main()
//{
//	vector<int>v{ 1, 7, 3, 6, 5, 6 };
//	pivotIndex(v);
//	return 0;
//}