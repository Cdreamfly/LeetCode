#include"LeetCode.h"
using namespace std;
vector<int> getRow(int numRows) {
    ++numRows;
    vector<vector<int>> ans(numRows);
    for (int i = 0; i < numRows; ++i) //������һ������ֵ
    {
        for (int j = 0; j <= i; ++j)
        {
            if (j == 0 || j == i) //�����������ߵı߽磬��ֵΪ1
                ans[i].push_back(1);
            else
                ans[i].push_back(ans[i - 1][j - 1] + ans[i - 1][j]);//����ֵΪ��λ�����������ϵĺ�
        }
    }
    return ans[ans.size() - 1];
}

int main()
{
	 
}