//#include"LeetCode.h"
//
//using namespace std;
///*����: 5
//���:
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
//	if (numRows == 0) return ans; //��numRowsΪ�գ����ؿ�����
//	for (int i = 0; i < numRows; ++i) //������һ������ֵ
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			if (j == 0 || j == i) //�����������ߵı߽磬��ֵΪ1
//				ans[i].push_back(1);
//			else
//				ans[i].push_back(ans[i - 1][j - 1] + ans[i - 1][j]);//����ֵΪ��λ�����������ϵĺ�
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