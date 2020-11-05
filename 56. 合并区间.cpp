//#include"LeetCode.h"
//using namespace std;
///*给出一个区间的集合，请合并所有重叠的区间。
//
//示例 1:
//
//输入: [[1,3],[2,6],[8,10],[15,18]]
//输出: [[1,6],[8,10],[15,18]]
//解释: 区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
//示例 2:
//
//输入: [[1,4],[4,5]]
//输出: [[1,5]]
//解释: 区间 [1,4] 和 [4,5] 可被视为重叠区间。
//*/
//vector<vector<int>> merge(vector<vector<int>>& intervals) {
//	sort(intervals.begin(), intervals.end());
//	vector<vector<int>>v;
//	int i = 0;
//	while (i < intervals.size())
//	{
//		int t = intervals[i][1];
//		int j = i + 1;
//		while (j < intervals.size() && intervals[j][0] <= t)
//		{
//			t = max(t, intervals[j][1]);
//			++j;
//		}
//		v.push_back({ intervals[i][0],t });
//		i = j;
//	}
//	return v;
//}
//int main()
//{
//	vector<vector<int>>v{ {1,3},{2,6},{8,10},{15,18} };
//	merge(v);
//	return 0;
//}