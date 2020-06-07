//#include<iostream>
//#include<vector>
//using namespace std;
///*输入:
//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。
//找出那个只出现了一次的元素。
//[2,2,1]
//输出: 1
//*/
//
//int singleNumber(vector<int>& nums) {
//    int n = nums[0];
//    for (int i = 1; i < nums.size(); ++i)
//    {
//        n ^= nums[i];
//    }
//    return n;
//}
//
//
//int main()
//{
//    vector<int>v{ 1,1,2,2,3 };
//    singleNumber(v);
//
//	return 0;
//}