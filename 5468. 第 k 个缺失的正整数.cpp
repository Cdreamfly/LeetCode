//#include"LeetCode.h"
//
//using namespace std;
///*给你一个 严格升序排列 的正整数数组 arr 和一个整数 k 。
//
//请你找到这个数组里第 k 个缺失的正整数。
//
//示例 1：
//
//输入：arr = [2,3,4,7,11], k = 5
//输出：9
//解释：缺失的正整数包括 [1,5,6,8,9,10,12,13,...] 。第 5 个缺失的正整数为 9 。
//示例 2：
//
//输入：arr = [1,2,3,4], k = 2
//输出：6
//解释：缺失的正整数包括 [5,6,7,...] 。第 2 个缺失的正整数为 6 。
//*/
//int findKthPositive(vector<int>& arr, int k) {
//	vector<int>v;
//	int i = 0;
//	int j = 1;
//	while (v.size() != k)
//	{
//		if (i < arr.size() && arr[i] != j)
//		{
//			v.push_back(j);
//			++j;
//		}
//		else if(i >= arr.size())
//		{
//			v.push_back(j);
//			++j;
//		}
//		else
//		{
//			++i;
//			++j;
//		}
//	}
//	return v[k - 1];
//}
//int main()
//{
//	vector<int>v{ 1,2,3,4 };
//	cout<<findKthPositive(v, 2);
//
//	return 0;
//}