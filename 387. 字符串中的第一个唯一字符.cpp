//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
///*
//给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。
//
//示例：
//
//s = "leetcode"
//返回 0
//
//s = "loveleetcode"
//返回 2
//*/
//int firstUniqChar(string s) {
//    class Solution {
//    public:
//        int firstUniqChar(string s) {
//            map<int, int> map;
//            for (auto c : s) map[c] += 1;
//            for (int i = 0; i < s.size(); ++i)
//            {
//                if (map[s[i]] == 1) return i;
//            }
//            return -1;
//        }
//    };
//}
//
//int main()
//{
//	string s = "aadadaad";
//	cout<<firstUniqChar(s);
//	return 0;
//}