//#include<iostream>
//#include<vector>
//using namespace std;
//
//int findNumbers(vector<int>& nums) {
//	int n = 0;
//	int j = 0;
//	for (int i = 0; i < nums.size(); ++i)
//	{
//		while (nums[i] > 0)
//		{
//			nums[i] /= 10;
//			++n;
//		}
//
//		if (n % 2 == 0)j++;
//		n = 0;
//	}
//	return j;
//}
//int main()
//{
//	vector<int>n{ 437,315,322,431,686,264,442 };
//	cout<<findNumbers(n);
//
//	return 0;
//}