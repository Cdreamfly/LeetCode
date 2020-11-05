//#include"LeetCode.h"
//using namespace std;
//
//int getLastMoment(int n, vector<int>& left, vector<int>& right) {
//    int l = 0, r = 0;
//    if (left.size() != 0)
//    {
//        l = left[0];
//        for (int i = 1; i < left.size(); ++i)
//        {
//            if (l < left[i])
//            {
//                l = left[i];
//            }
//        }
//    }
//    if (right.size() != 0)
//    {
//        r = right[0];
//        for (int i = 1; i < right.size(); ++i)
//        {
//            if (r > right[i])
//            {
//                r = right[i];
//            }
//        }
//        r = n - r;
//    }
//    return l > r ? l : r;
//}
//int main()
//{
//	vector<int>l{ 0,1,2,3,4,5,6,7 };
//	vector<int>r{ };
//	cout<<getLastMoment(7, l, r);
//	return 0;
//}
//
///*class Solution {
//public:
//    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
//        sort(left.begin(), left.end());
//        sort(right.begin(), right.end());
//        int l = 0;
//        int r = 0;
//        if (right.size() != 0)
//        {
//            l = right[0];
//            l = n - l;
//        }
//        if (left.size() != 0)
//        {
//            r = left[left.size() - 1];
//            r = abs(0 - r);
//        }
//
//        return l > r ? l : r;
//    }
//};*/