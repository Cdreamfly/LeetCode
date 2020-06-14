//#include"LeetCode.h"
//
//using namespace std;
///*
// n 名士兵站成一排。每个士兵都有一个 独一无二 的评分 rating 。
//
//每 3 个士兵可以组成一个作战单位，分组规则如下：
//
//从队伍中选出下标分别为 i、j、k 的 3 名士兵，他们的评分分别为 rating[i]、rating[j]、rating[k]
//作战单位需满足： rating[i] < rating[j] < rating[k] 或者 rating[i] > rating[j] > rating[k] ，其中  0 <= i < j < k < n
//请你返回按上述条件可以组建的作战单位数量。每个士兵都可以是多个作战单位的一部分。
//
//示例 1：
//
//输入：rating = [2,5,3,4,1]
//输出：3
//解释：我们可以组建三个作战单位 (2,3,4)、(5,4,1)、(5,3,1) 。*/
//class Solution {
//public:
//    int numTeams(vector<int>& rating) {
//        int ret = 0;
//        for (int i = 0; i < rating.size(); ++i)
//        {
//            for (int j = i + 1; j < rating.size(); ++j)
//            {
//                for (int k = j + 1; k < rating.size(); ++k)
//                {
//                    if (rating[j] > rating[i] && rating[k] > rating[j] || rating[j] > rating[k] && rating[i] > rating[j])
//                    {
//                        ++ret;
//                    }
//                }
//            }
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//
//
//	retunr 0;
//}