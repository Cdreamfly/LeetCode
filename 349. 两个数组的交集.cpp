//#include<iostream>
//#include<algorithm>
//#include<unordered_set>
//#include<vector>
//
//using namespace std;
///*
//ÊäÈë: nums1 = [1,2,2,1], nums2 = [2,2]
//Êä³ö: [2]
//*/
//
//class Solution {
//public:
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        unordered_set<int>set(nums1.begin(), nums1.end());
//        nums1.clear();
//        for (auto& i : nums2)
//        {
//            if (set.erase(i))
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