//#include"LeetCode.h"
//using namespace std;
//class Solution {
//public:
//    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
//        if (matrix.empty() || matrix[0].empty()) return {};
//        vector<int> res;
//        int m = matrix.size();
//        int n = matrix[0].size();
//        int N = m * n;
//        int i = 0, j = 0;
//        while (res.size() < N) {     //������������һֱ��
//            while (i >= 0 && j < n)
//            {
//                res.push_back(matrix[i--][j++]); //��������ֱ���߳���һ�л������һ��
//            }
//            ++i;                    //�ߵ���һ������ȥ�ˣ�����
//            if (j == n)
//            {
//                --j, ++i;    //�ߵ����һ���ұ�ȥ�ˣ����ƻ����������ƶ�
//            }
//            while (j >= 0 && i < m)
//            {
//                res.push_back(matrix[i++][j--]); //��������ֱ���߳���һ�л������һ��
//            }
//            ++j;                    //�ߵ���һ�����ȥ�ˣ�����
//            if (i == m)
//            {
//                --i, ++j;    //�ߵ����һ������ȥ�ˣ����ƻ����������ƶ�
//            }
//        }
//        return res;
//    }
//};
//
//int main()
//{
//
//
//	return 0;
//}