//#include"LeetCode.h"
///*
//给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回 [0, 1]
//*/
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//  
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            for (int j = i + 1; j < nums.size(); ++j)
//            {
//                if (nums[i] + nums[j] == target)
//                {
//                    return { i,j };
//                }
//            }
//        }
//        return{};
//    }
//};
//
//#include<stdio.h>
//#include<stdlib.h>
//int* twoSum1(int* nums, int numsSize, int target, int* returnSize){
//    int i, j, flag = 0;
//    int* a = (int*)malloc(sizeof(int) * 2);
//    for (i = 0; i < numsSize; i++){
//        for (j = i + 1; j < numsSize; j++){
//            if (target == nums[i] + nums[j]){
//                flag = 1;
//                a[0] = i;
//                a[1] = j;
//                break;
//            }
//        }if (1 == flag){
//            *returnSize = 2;
//            return a;
//        }
//    }
//    *returnSize = 0;
//    return a;
//}
//int* twoSum2(int* nums, int numsSize, int target, int* returnSize){
//    int i, j;
//    int* a = (int*)malloc(sizeof(int) * 2);
//    for (i = 0; i < numsSize; i++){
//        for (j = i + 1; j < numsSize; j++){
//            if (target == nums[i] + nums[j]){
//                a[0] = i;
//                a[1] = j;
//                *returnSize = 2;
//                return a;
//            }
//        }
//    }
//    *returnSize = 0;
//    return a;
//}
//
//int main()
//{
//    int num[4] = { 2, 7, 11, 15 };
//    int n[2];
//    printf("%d",sizeof(twoSum1(num, 4, 9, n)));
//    printf("%d", sizeof(twoSum2(num, 4, 9, n)));
//    
//    return 0;
//}