#include"LeetCode.h"
using namespace std;

int rangeSum(vector<int>& nums, int n, int left, int right) {
	vector<int>v;
	int num = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			num += nums[j];
			v.push_back(num);
		}
		num = 0;
	}
	sort(v.begin(), v.end());
	num = 0;
	--left;
	--right;
	for (int i = left; i <= right; ++i)
	{
		num += v[i];
	}
	return num;
}
int main()
{
	vector<int>v{ 1,2,3,4 };

	cout<<rangeSum(v, 4, 1, 5);
	return 0;
}