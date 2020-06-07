//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
//	horizontalCuts.push_back(0);
//	horizontalCuts.push_back(h);
//	verticalCuts.push_back(0);
//	verticalCuts.push_back(w);
//	sort(horizontalCuts.begin(), horizontalCuts.end());
//	sort(verticalCuts.begin(), verticalCuts.end());
//	long long hMax = 0;
//	long long wMax = 0;
//	int i = 0;
//	int j = 1;
//	while (j < horizontalCuts.size())
//	{
//		if (horizontalCuts[j] - horizontalCuts[i] > hMax)
//		{
//			hMax = horizontalCuts[j] - horizontalCuts[i];
//		}
//		++i;
//		++j;
//	}
//	i = 0;
//	j = 1;
//	while (j < verticalCuts.size())
//	{
//		if (verticalCuts[j] - verticalCuts[i] > wMax)
//		{
//			wMax = verticalCuts[j] - verticalCuts[i];
//		}
//		++i;
//		++j;
//	}
//	long long mod = (1e9 + 7);
//	long long ret = hMax * wMax;
//	return ret % mod;
//}
//int main()
//{
//	int i = 1000000000;
//	int j = 1000000000;
//	vector<int>v1{ 1,2,4 };
//	vector<int>v2{ 1,3 };
//	cout<<maxArea(i, j, v1, v2);
//	return 0;
//}