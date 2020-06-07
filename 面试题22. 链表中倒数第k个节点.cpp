//#include<iostream>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    ListNode* getKthFromEnd(ListNode* head, int k) {
//        ListNode* fast = head;
//        ListNode* slow = head;
//        while (fast != nullptr)
//        {
//            if (k > 0)
//            {
//                fast = fast->next;
//                --k;
//            }
//            else
//            {
//                fast = fast->next;
//                slow = slow->next;
//            }
//        }
//        return slow;
//    }
//};
//
//int main()
//{
//
//	return 0;
//}