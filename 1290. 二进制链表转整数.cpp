//#include<iostream>
//using namespace std;
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//class Solution {
//public:
//    int getDecimalValue(ListNode* head) {
//        int ret = 0;
//        while (head)
//        {
//            ret = (ret << 1) + head->val;
//            head = head->next;
//        }
//        return ret;
//    }
//};
//int main()
//{
//
//	return 0;
//}