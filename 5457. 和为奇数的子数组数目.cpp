#include"LeetCode.h"
using namespace std;
/*ʾ�� 1��

���룺arr = [1,3,5]
�����4
���ͣ����е�������Ϊ [[1],[1,3],[1,3,5],[3],[3,5],[5]] ��
����������ĺ�Ϊ [1,4,9,3,8,5].
�����Ͱ��� [1,9,3,5] �����Դ�Ϊ 4 ��
ʾ�� 2 ��

���룺arr = [2,4,6]
�����0
���ͣ�����������Ϊ [[2],[2,4],[2,4,6],[4],[4,6],[6]] ��
�����������Ϊ [2,6,12,4,10,6] ��
����������Ͷ���ż�������Դ�Ϊ 0 ��
ʾ�� 3��

���룺arr = [1,2,3,4,5,6,7]
�����16*/
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long mod = 1e9 + 7;
        long long ans = 0;
        int odd = 0;
        int even = 0;

        for (auto v : arr) {
            if (v % 2 == 0) {
                even++;
            }
            else {
                int t = odd;
                odd = even + 1;
                even = t;
            }
            ans = (ans + odd) % mod;
        }
        return ans;
    }
};
int main()
{


	return 0;
}