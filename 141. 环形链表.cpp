//#include"LeetCode.h"
//using namespace std;
///*给定一个链表，判断链表中是否有环。
//
//为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 
//如果 pos 是 -1，则在该链表中没有环。
//
//示例 1：
//
//输入：head = [3,2,0,-4], pos = 1
//输出：true
//解释：链表中有一个环，其尾部连接到第二个节点。
//*/
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 
//class Solution {
//public:
//    bool hasCycle(ListNode* head) {
//        if (head == nullptr)return false;
//        ListNode* fast = head->next;
//        ListNode* slow = head;
//        while (fast != nullptr && fast->next != nullptr)
//        {
//            fast = fast->next->next;
//            slow = slow->next;
//            if (fast == slow)
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//bool hasCycle(ListNode* head) {
//    if (head == nullptr)return false;
//    unordered_map<ListNode*, int>map;
//    while (head)
//    {
//        ++map[head];
//        if (map[head] > 1)return true;
//        head = head->next;
//    }
//    return false;
//}
//};
//int main()
//{
//
//
//	return 0;
//}