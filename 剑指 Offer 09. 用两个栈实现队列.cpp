﻿#include"LeetCode.h"
using namespace std;
/*用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead ，
分别完成在队列尾部插入整数和在队列头部删除整数的功能。(若队列中没有元素，deleteHead 操作返回 -1 )

示例 1：

输入：
["CQueue","appendTail","deleteHead","deleteHead"]
[[],[3],[],[]]
输出：[null,null,3,-1]
示例 2：

输入：
["CQueue","deleteHead","appendTail","appendTail","deleteHead","deleteHead"]
[[],[],[5],[2],[],[]]
输出：[null,-1,null,null,5,2]
提示：
。*/
class CQueue {
public:
    stack<int> A;
    stack<int> B;
    int size = 0;
    CQueue() {

    }

    void appendTail(int value) {
        A.push(value);
        size++;
    }

    int deleteHead() {
        if (size == 0) return -1;
        if (B.empty() && !A.empty()) {
            while (!A.empty()) {
                B.push(A.top());
                A.pop();
            }
        }

        int res = B.top();
        B.pop();
        size--;
        return res;
    }
};


/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
int main()
{

	return 0;
}
