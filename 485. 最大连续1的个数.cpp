//#include"LeetCode.h"
//
//using namespace std;
//
///*
//����һ�����������飬 ���������������1�ĸ�����
//
//ʾ�� 1:
//
//����: [1,1,0,1,1,1]
//���: 3
//����: ��ͷ����λ��������λ��������1�������������1�ĸ����� 3.
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