//#include<iostream>
//#include<vector>
//using namespace std;
///*
//给定 nums = [0,0,1,1,1,2,2,3,3,4],
//
//函数应该返回新的长度 5, 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4。
//
//你不需要考虑数组中超出新长度后面的元素。
//*/
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int len = nums.size();
//        if (len == 0)return 0;
//        int i = 0;
//        int j = 1;
//        while (j < len)
//        {
//            if (nums[i] != nums[j])
//            {
//                nums[++i] = nums[j];
//            }
//            ++j;
//        }
//    }
//};
//
//int main()
//{
//
//
//	return 0;
//}