//#include<iostream>
//#include<vector>
//using namespace std;
///*����:
//nums = [1, 7, 3, 6, 5, 6]
//��� : 3
//���� :
//	����3(nums[3] = 6) �������֮��(1 + 7 + 3 = 11)�����Ҳ���֮��(5 + 6 = 11)��ȡ�
//	ͬʱ, 3 Ҳ�ǵ�һ������Ҫ�������������
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