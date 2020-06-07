//#include<iostream>
//using namespace std;
//class ListNode {
//
//};
///*
//删除链表中等于给定值 val 的所有节点。
//
//示例:
//
//输入: 1->2->6->3->4->5->6, val = 6
//输出: 1->2->3->4->5
//*/
//class Solution {
//public:
//    ListNode* removeElements(ListNode* head, int val) {
//        ListNode* dummhead = new ListNode(-1);
//        dummhead->next = head;
//        ListNode* prev = dummhead;
//        while (prev->next != NULL)
//        {
//            if (prev->next->val == val)
//            {
//                prev->next = prev->next->next;
//            }
//            else
//            {
//                prev = prev->next;
//            }
//        }
//        return dummhead->next;
//    }
//};
//
////递归解法
//class Solution {
//public:
//    ListNode* removeElements(ListNode* head, int val) {
//        if (head == nullptr)return nullptr;
//        head->next = removeElements(head->next, val);
//        return head->val == val ? head->next : head;
//    }
//};
//
//
//int main()
//{
//
//
//	return 0;
//}