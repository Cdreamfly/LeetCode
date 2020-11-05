#include"LeetCode.h"
using namespace std;

class Solution {
public:

    int calculate(string s) {
        int x = 1;
        int y = 0;
        for (auto i : s)
        {
            if (s == "A")
            {
                x = 2 * x + y;
            }
            else
            {
                y = 2 * y + x;
            }
        }
        return x + y;
    }
};