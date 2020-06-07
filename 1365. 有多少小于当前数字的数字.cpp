//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//	vector<int>v;
//	int n = 0;
//	for (int i = 0; i < nums.size(); ++i)
//	{
//		for (int j = 0; j < nums.size(); ++j)
//		{
//			if (nums[i] > nums[j])++n;
//		}
//		v.push_back(n);
//		n = 0;
//	}
//	return v;
//}
//
//int main()
//{
//	vector<int>v{ 6,5,4,8 };
//	v = smallerNumbersThanCurrent(v);
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	return 0;
//}