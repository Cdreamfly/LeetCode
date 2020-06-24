#include"LeetCode.h"
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* low = head;
        while (fast != NULL && (fast->next != NULL))
        {
            low = low->next;
            fast = fast->next->next;
        }
        return low;
    }
};
int main()
{

	return 0;
}