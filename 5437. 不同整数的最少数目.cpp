//#include"LeetCode.h"
//
//using namespace std;
//class Solution {
//public:
//    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
//        unordered_map<int, int> cnt;
//        for (int i : arr)
//            cnt[i]++;
//        vector<int> c;
//        for (auto p : cnt)
//            c.emplace_back(p.second);
//        sort(c.begin(), c.end());
//        int t = c.size();
//        int sum = 0;
//        for (int i = 0; i < t; ++i) {
//            sum += c[i];
//            if (sum > k)
//                return t - i;
//        }
//        return 0;
//    }
//};
//int main()
//{
//	return 0;
//}