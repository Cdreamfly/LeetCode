//#include<iostream>
//
//using namespace std;
///*ͳ������С�ڷǸ����� n ��������������
//
//ʾ��:
//
//����: 10
//���: 4
//����: С�� 10 ������һ���� 4 ��, ������ 2, 3, 5, 7 ��
//*/
//int countPrimes(int n)
//{
//	if (n < 3)return 0;
//	int count = 1;
//	for (int i = 3; i < n; ++i)
//	{
//		if ((i & 1) == 0)continue;
//		bool sign = true;
//		for (int j = 3; j * j <= i; j+=2)
//		{
//			if (i % j == 0)
//			{
//				sign = false;
//				break;
//			}
//		}
//		if (sign)++count;
//	}
//	return count;
//}
//int main()
//{
//	return 0;
//}