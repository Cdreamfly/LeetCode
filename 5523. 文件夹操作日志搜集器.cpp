#include"LeetCode.h"

/*每当用户执行变更文件夹操作时，LeetCode 文件系统都会保存一条日志记录。

下面给出对变更操作的说明：

"../" ：移动到当前文件夹的父文件夹。如果已经在主文件夹下，则 继续停留在当前文件夹 。
"./" ：继续停留在当前文件夹。
"x/" ：移动到名为 x 的子文件夹中。题目数据 保证总是存在文件夹 x 。
给你一个字符串列表 logs ，其中 logs[i] 是用户在 ith 步执行的操作。

文件系统启动时位于主文件夹，然后执行 logs 中的操作。

执行完所有变更文件夹操作后，请你找出 返回主文件夹所需的最小步数 。
*/
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int j = 0;
        for (int i = 0; i < logs.size(); ++i)
        {
            if (logs[i] != "../" && logs[i] != "./")
            {
                ++j;
            }
            else if (logs[i] == "../")
            {
                if (--j <= 0)
                {
                    j = 0;
                }

            }
        }
        return j;
    }
};
int main()
{


	return 0;
}