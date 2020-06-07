//#include<iostream>
//#include<string>
//using namespace std;
//
//int maxPower(string s) {
//	if (s.size() == 0)return 0;
//	if (s.size() == 1)return 1;
//
//	int num = 0;
//	int beg = 0;
//	int end = 0;
//	int max = 0;
//	while (beg != s.size() - 1)
//	{
//		
//		if (s[beg] == s[end])
//		{
//			++end;
//			++num;
//		}
//		else
//		{
//			if (max < num)
//			{
//				max = num;
//			}
//			else
//			{
//				++beg;
//				num = 0;
//			}
//		}
//	}
//	return max;
//}
//int main()
//{
//	cout << maxPower("leet");
//
//	return 0;
//}