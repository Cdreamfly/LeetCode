//#include"LeetCode.h"
//using namespace std;
///*����һ���������� arr�������ж��������Ƿ������������Ԫ�ض��������������������ڣ��뷵�� true �����򣬷��� false �� 
//
//ʾ�� 1��
//
//���룺arr = [2,6,4,1]
//�����false
//���ͣ���������������Ԫ�ض��������������
//ʾ�� 2��
//
//���룺arr = [1,2,34,3,4,5,7,23,12]
//�����true
//���ͣ�������������Ԫ�ض���������������� [5,7,23] ��*/
//bool threeConsecutiveOdds(vector<int>& arr) {
//	int res = 0;
//	for (int i = 0; i < arr.size(); ++i)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			++res;
//			if (res == 3)return true;
//		}
//		else
//		{
//			res = 0;
//		}
//	}
//	return false;
//}
//int main()
//{
//
//	return 0;
//}