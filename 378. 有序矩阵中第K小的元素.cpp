//#include"LeetCode.h"
//using namespace std;
//
///*
//����һ�� n x n ��������ÿ�к�ÿ��Ԫ�ؾ������������ҵ������е� k С��Ԫ�ء�
//��ע�⣬���������ĵ� k СԪ�أ������ǵ� k ����ͬ��Ԫ�ء�
//
//ʾ����
//
//matrix = [
//   [ 1,  5,  9],
//   [10, 11, 13],
//   [12, 13, 15]
//],
//k = 8,
//
//���� 13��*/
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