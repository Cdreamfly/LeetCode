//#include<iostream>
//#include<vector>
//using namespace std;
///*给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//
//示例:
//
//输入: [0,1,0,3,12]
//输出: [1,3,12,0,0]
//说明:
//
//必须在原数组上操作，不能拷贝额外的数组。
//尽量减少操作次数。*/
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int count = 0;
//        for (auto it = nums.begin(); it != nums.end();)
//        {
//            if (*it == 0)
//            {
//                nums.erase(it);
//                ++count;
//            }
//            else
//            {
//                ++it;
//            }
//        }
//        nums.insert(nums.end(), count, 0);
//    }
//};
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        for (int i = 0, j = 0; i < nums.size(); ++i)
//        {
//            if (nums[i] != 0)
//            {
//                swap(nums[i], nums[j++]);
//            }
//        }
//    }
//};
//
//int main()
//{
//
//
//
//	return 0;
//}