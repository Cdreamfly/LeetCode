//#include"LeetCode.h"
//using namespace std;
///*����һ���������� arr ��
//
//���һ�������У�������������Ĳ��ܵ���ͬһ����������ô������оͳ�Ϊ �Ȳ����� ��
//
//��������������������γɵȲ����У��뷵�� true �����򣬷��� false ��
//
// 
//
//ʾ�� 1��
//
//���룺arr = [3,5,1]
//�����true
//���ͣ���������������õ� [1,3,5] ���� [5,3,1] ��������������Ĳ�ֱ�Ϊ 2 �� -2 �������γɵȲ����С�
//ʾ�� 2��
//
//���룺arr = [1,2,4]
//�����false
//���ͣ��޷�ͨ����������õ��Ȳ����С�*/
//
//bool canMakeArithmeticProgression(vector<int>& arr) {
//	sort(arr.begin(), arr.end());
//	int i = 0;
//	int j = 1;
//	int num = arr[j] - arr[i];
//	++i;
//	++j;
//	while (j < arr.size())
//	{
//		int tmp = arr[j] - arr[i];
//		if (tmp != num)
//		{
//			return false;
//		}
//		++i;
//		++j;
//	}
//	return true;
//}
//int main()
//{
//
//	return 0;
//}