//#include"LeetCode.h"
//
//using namespace std;
///*����һ�� �ϸ��������� ������������ arr ��һ������ k ��
//
//�����ҵ����������� k ��ȱʧ����������
//
//ʾ�� 1��
//
//���룺arr = [2,3,4,7,11], k = 5
//�����9
//���ͣ�ȱʧ������������ [1,5,6,8,9,10,12,13,...] ���� 5 ��ȱʧ��������Ϊ 9 ��
//ʾ�� 2��
//
//���룺arr = [1,2,3,4], k = 2
//�����6
//���ͣ�ȱʧ������������ [5,6,7,...] ���� 2 ��ȱʧ��������Ϊ 6 ��
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