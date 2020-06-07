//#include<iostream>
//#include<vector>
//
//using namespace std;
///*
//给定 nums = [3,2,2,3], val = 3,
//
//函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。
//
//你不需要考虑数组中超出新长度后面的元素。
//*/
//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (nums[i] == val)
//            {
//                nums.erase(nums.begin() + i);
//                --i;
//            }
//        } 
//        return nums.size();
//    }
//};
//
//int main()
//{
//
//
//	return 0;
//}