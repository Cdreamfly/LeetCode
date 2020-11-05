//#include"LeetCode.h"
//using namespace std;
//
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 
//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        if (headA == nullptr || headB == nullptr) return nullptr;
//        ListNode* A = headA;
//        ListNode* B = headB;
//        while (A != B)
//        {
//            if (A == nullptr)
//            {
//                A = headB;
//            }
//            else
//            {
//                A = A->next;
//            }
//            if (B == nullptr)
//            {
//                B = headA;
//            }
//            else
//            {
//                B = B->next;
//            }
//        }
//        return A;
//    }
//};
//int main()
//{
//
//	return 0;
//}