//#include<iostream>
//
//using namespace std;
///*统计所有小于非负整数 n 的质数的数量。
//
//示例:
//
//输入: 10
//输出: 4
//解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。
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