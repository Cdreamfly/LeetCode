//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*��һ������������nums�У����Ǵ���һ�����Ԫ�� ��
//
//���������е����Ԫ���Ƿ�������������ÿ���������ֵ�������
//
//����ǣ��򷵻����Ԫ�ص����������򷵻�-1��
//
//ʾ�� 1:
//
//����: nums = [3, 6, 1, 0]
//���: 1
//����: 6����������, ���������е���������,
//6��������������Ԫ�ص�������6��������1, �������Ƿ���1.
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