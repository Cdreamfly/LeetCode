//#include<iostream>
//#include<stack>
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
//    bool isPalindrome(ListNode* head) {
//        stack<int>s;
//        ListNode* p = head;
//        while (p)
//        {
//            s.push(p->val);
//            p = p->next;
//        }
//        p = head;
//        while (p)
//        {
//            if (s.top() != p->val)return false;
//            s.pop();
//            p = p->next;
//        }
//        return true;
//    }
//};
//int main()
//{
//
//	return 0;
//}