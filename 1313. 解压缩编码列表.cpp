//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<int> decompressRLElist(vector<int>& nums) {
//	vector<int>v;
//	for (int i = 0; i < nums.size(); i += 2)
//	{
//		for (int j = 0; j < nums[i]; ++j)
//		{
//			v.push_back(nums[i + 1]);
//		}
//	}
//	return v;
//}
//int main()
//{
//	vector<int>v{ 1,2,3,4 };
//	v = decompressRLElist(v);
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	return 0;
//}