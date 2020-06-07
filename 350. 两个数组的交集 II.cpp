//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<algorithm>
//
//using namespace std;
///*
//给定两个数组，编写一个函数来计算它们的交集。
//
//示例 1:
//
//输入: nums1 = [1,2,2,1], nums2 = [2,2]
//输出: [2,2]
//*/
//class Solution {
//public:
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        unordered_map<int, int>map;
//        for (int i : nums1)
//        {
//            ++map[i];
//        }
//        nums1.clear();
//        for (int i : nums2)
//        {
//            if (map.find(i) != map.end() && --map[i] >= 0)
//            {
//                nums1.push_back(i);
//            }
//        }
//        return nums1;
//    }
//};
//
//int main()
//{
//
//
//	return 0;
//}