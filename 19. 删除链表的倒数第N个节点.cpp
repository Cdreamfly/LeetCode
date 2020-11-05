//#include"LeetCode.h"
//using namespace std;
///*给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
//
//示例：
//
//给定一个链表: 1->2->3->4->5, 和 n = 2.
//
//当删除了倒数第二个节点后，链表变为 1->2->3->5.*/
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* dummy = new ListNode(0);
//        dummy->next = head;
//        ListNode* pre = dummy;
//        ListNode* p = head;
//        while (n--)
//        {
//            p = p->next;
//        }
//        while (p)
//        {
//            p = p->next;
//            pre = pre->next;
//        }
//        pre->next = pre->next->next;
//        return dummy->next;
//    }
//};
//int main()
//{
//
//	return 0;
//}