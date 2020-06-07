//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*
//给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素最多出现两次，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//
//示例 1:
//
//给定 nums = [1,1,1,2,2,3],
//
//函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。
//
//你不需要考虑数组中超出新长度后面的元素。
//*/
//int removeDuplicates(vector<int>& nums) {
//    int j = 1;
//    if (nums.size() <= 2)return nums.size();
//    for (int i = 2; i < nums.size(); ++i)
//    {
//        if (nums[i] != nums[j - 1])
//        {
//            nums[++j] = nums[i];
//        }
//    }
//    return j + 1;
//
//}
//
//int main()
//{
//    
//	return 0;
//}