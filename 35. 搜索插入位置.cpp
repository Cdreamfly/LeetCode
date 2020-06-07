//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
///*给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
//如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//
//你可以假设数组中无重复元素。
//
//示例 1:
//
//输入: [1,3,5,6], 5
//输出: 2
//*/
//
//int searchInsert(vector<int>& nums, int target) {
//    for (int i = 0; i < nums.size(); ++i)
//    {
//        if (nums[i] == target)
//        {
//            return i;
//        }
//        else if (nums[i] > target)
//        {
//            return i;
//        }
//        else if (nums[nums.size() - 1] < target)
//        {
//            return nums.size();
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    vector<int>v = { 1,3,5,6 };
//    cout << searchInsert(v, 7) << endl;
//	return 0;
//}