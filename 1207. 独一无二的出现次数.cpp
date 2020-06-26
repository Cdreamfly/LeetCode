﻿//#include"LeetCode.h"
//
//using namespace std;
///*
//给你一个整数数组 arr，请你帮忙统计数组中每个数的出现次数。
//
//如果每个数的出现次数都是独一无二的，就返回 true；否则返回 false。
//
//示例 1：
//
//输入：arr = [1,2,2,1,1,3]
//输出：true
//解释：在该数组中，1 出现了 3 次，2 出现了 2 次，3 只出现了 1 次。没有两个数的出现次数相同。*/
//bool uniqueOccurrences(vector<int>& arr) {
//	unordered_map<int, int>map;
//	for (auto i : arr)
//	{
//		++map[i];
//	}
//	unordered_set<int, int>set;
//	for (auto i : map)
//	{
//		set.insert(i.second);
//	}
//	return map.size() == set.size();
//}
//int main()
//{
//	vector<int>v{ 1,2,2,1,1,3 };
//	cout << uniqueOccurrences(v);
//
//	return 0;
//}