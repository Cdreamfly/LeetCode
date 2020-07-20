//#include"LeetCode.h"
//using namespace std;
//
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 
//
//ListNode* detectCycle(ListNode* head) {
//    unordered_map<ListNode*, int>map;
//    while (head)
//    {
//        ++map[head];
//        if (map[head] > 1)return head;
//        head = head->next;
//    }
//    return nullptr;
//}
//int main()
//{
//
//	return 0;
//}