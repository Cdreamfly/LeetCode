#include"LeetCode.h"
using namespace std;
/*
给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。

示例 1：

输入: "babad"
输出: "bab"
注意: "aba" 也是一个有效答案。
示例 2：

输入: "cbbd"
输出: "bb"*/
class Solution {
public:
    string longestPalindrome(string s) {
        if (s == "")return "";
        int len = s.length();
        int index = 0, maxL = 0, begin = 0;
        while (index < len)
        {
            int right = index, left = index;
            while (index < len && s[index + 1] == s[index])
            {
                index++;
                right++;
            }
            while (right < len && left >= 0 && s[right] == s[left]) {
                right++;
                left--;
            }
            right--, left++;
            if (right - left + 1 > maxL) {
                maxL = right - left + 1;
                begin = left;
            }
            index++;
        }
        return s.substr(begin, maxL);
    }
};
int main()
{

	return 0;
}