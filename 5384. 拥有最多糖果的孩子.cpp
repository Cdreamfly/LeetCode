//#include<iostream>
//#include<vector>
//using namespace std;
//vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//	vector<bool>v;
//	int max = candies[0];
//	for (int i = 1; i < candies.size(); ++i)
//	{
//		if (candies[i] > max)
//		{
//			max = candies[i];
//		}
//	}
//	for (int i = 0; i < candies.size(); ++i)
//	{
//		if (candies[i] + extraCandies >= max)
//		{
//			v.push_back(true);
//		}
//		else
//		{
//			v.push_back(false);
//		}
//	}
//	return v;
//}
//int main()
//{
//	vector<int>v = { 2,3,5,1,3 };
//	vector<bool>v1;
//	v1 = kidsWithCandies(v, 3);
//	for (auto i : v1)
//	{
//		cout << i << " ";
//	}
//	return 0;
//}