//#include"LeetCode.h"
//using namespace std;
//
///*
//给定一个 n x n 矩阵，其中每行和每列元素均按升序排序，找到矩阵中第 k 小的元素。
//请注意，它是排序后的第 k 小元素，而不是第 k 个不同的元素。
//
//示例：
//
//matrix = [
//   [ 1,  5,  9],
//   [10, 11, 13],
//   [12, 13, 15]
//],
//k = 8,
//
//返回 13。*/
//int kthSmallest(vector<vector<int>>& matrix, int k) {
//	vector<int>v;
//	for (auto i : matrix)
//	{
//		for (auto j : i)
//		{
//			v.push_back(j);
//		}
//	}
//	sort(v.begin(), v.end());
//	return v[k - 1];
//}
//int main()
//{
//	vector<vector<int>>v{ 
//		{ 1,  5,  9}, 
//		{10, 11, 13 }, 
//		{ 12, 13, 15}};
//	kthSmallest(v, 8);
//	return 0;
//}