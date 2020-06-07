//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*
//给定一个含有 n 个正整数的数组和一个正整数 s ，
//找出该数组中满足其和 ≥ s 的长度最小的连续子数组，并返回其长度。
//如果不存在符合条件的连续子数组，返回 0。
//
//示例: 
//
//输入: s = 7, nums = [2,3,1,2,4,3]
//输出: 2
//解释: 子数组 [4,3] 是该条件下的长度最小的连续子数组。
//*/
//int minSubArrayLen(int s, vector<int>& nums)
//{
//    int n = nums.size();
//    int ans = INT_MAX;
//    int left = 0;
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += nums[i];
//        while (sum >= s) {
//            ans = min(ans, i + 1 - left);
//            sum -= nums[left++];
//        }
//    }
//    return (ans != INT_MAX) ? ans : 0;
//}
//int main()
//{
//	vector<int>v{ 1,4,4 };
//	cout<<minSubArrayLen(4, v);
//	return 0;
//}