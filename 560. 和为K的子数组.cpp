﻿//#include<iostream>
//#include<vector>
//using namespace std;
///*
//给定一个整数数组和一个整数 k，你需要找到该数组中和为 k 的连续的子数组的个数。
//
//示例 1 :
//
//输入:nums = [1,1,1], k = 2
//输出: 2 , [1,1] 与 [1,1] 为两种不同的情况。
//*/
//int subarraySum(vector<int>& nums, int k)
//{
//    int count = 0;
//    for (int i = 0; i < nums.size(); ++i) {
//        int sum = 0;
//        for (int j = i; j >= 0; --j) {
//            sum += nums[j];
//            if (sum == k) {
//                count++;
//            }
//        }
//    }
//    return count;
//}
//
//int main()
//{
//
//	return 0;
//}