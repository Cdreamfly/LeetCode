//#include"leetcode.h"
//using namespace std;
///*
//编写一个函数来查找字符串数组中的最长公共前缀。
//
//如果不存在公共前缀，返回空字符串 ""。
//
//示例 1:
//
//输入: ["flower","flow","flight"]
//输出: "fl"
//示例 2:
//
//输入: ["dog","racecar","car"]
//输出: ""
//解释: 输入不存在公共前缀。*/
//string longestCommonPrefix(vector<string>& strs) {
//	if (strs.size() == 0)return "";
//	for (int i = 0; i < strs[0].length(); ++i)
//	{
//		for (int j = 1; j < strs.size(); ++j)
//		{
//			if (strs[j][i] != strs[0][i])
//			{
//				return strs[0].substr(0, i);
//			}
//		}
//	}
//	return strs[0];
//}
//int main()
//{
//
//	return 0;
//}