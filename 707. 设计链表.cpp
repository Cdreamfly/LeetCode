//#include<iostream>
//using namespace std;
//
//class MyLinkedList {
//private:
//    struct SinglyListNode {
//        int val;
//        SinglyListNode* next;
//        SinglyListNode(int x) : val(x), next(nullptr) {}
//    };
//    SinglyListNode* head;
//public:
//    
//    /** Initialize your data structure here. */
//    MyLinkedList() :head(nullptr) {}
//    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
//    int get(int index) {
//        int count = 0;
//        SinglyListNode* p = head;
//        while (p != nullptr && count < index)
//        {
//            p = p->next;
//            ++count;
//        }
//        if (p != nullptr)
//        {
//            return p->val;
//        }
//        else
//        {
//            return -1;
//        }
//    }
//
//    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
//    void addAtHead(int val) {
//        SinglyListNode* p = new SinglyListNode(val);
//        p->next = head;
//        head = p;
//    }
//
//    /** Append a node of value val to the last element of the linked list. */
//    void addAtTail(int val) {
//        SinglyListNode* p = new SinglyListNode(val);
//        if (head == nullptr)
//        {
//            head = p;
//            return;
//        }
//        SinglyListNode* q = head;
//        while (q->next != nullptr)
//        {
//            q = q->next;
//        }
//        q->next = p;
//    }
//
//    void addAtIndex(int index, int val) {
//        SinglyListNode* node = new SinglyListNode(val);
//        if (index <= 0)
//        {
//            node->next = head;
//            head = node;
//            return;
//        }
//        int i = 0;
//        SinglyListNode* p = head;
//      
//        while (p && i < index - 1)
//        {
//            p = p->next;
//            ++i;
//        }
//        if (p)
//        {
//            node->next = p->next;
//            p->next = node;
//        }
//    }
//
//    /** Delete the index-th node in the linked list, if the index is valid. */
//    void deleteAtIndex(int index) {
//        if (index == 0 && head != nullptr)
//        {
//            SinglyListNode* del = head;
//            head = head->next;
//            delete del;
//            return;
//        }
//        int i = 0;
//        SinglyListNode* p = head;
//        while (p != nullptr && i < index - 1)
//        {
//            p = p->next;
//            ++i;
//        }
//        if (p == nullptr)return;
//        if (p->next != nullptr)
//        {
//            SinglyListNode* del = p->next;
//            p->next = del->next;
//            delete del;
//        }
//    }
//};
//
///**
// * Your MyLinkedList object will be instantiated and called as such:
// * MyLinkedList* obj = new MyLinkedList();
// * int param_1 = obj->get(index);
// * obj->addAtHead(val);
// * obj->addAtTail(val);
// * obj->addAtIndex(index,val);
// * obj->deleteAtIndex(index);
// */
//
//int main()
//{
//
//
//    return 0;
//}