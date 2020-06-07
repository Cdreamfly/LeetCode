//#include<iostream>
//#include<stack>
//using namespace std;
//
//class MyQueue {
//public:
//    /** Initialize your data structure here. */
//    MyQueue() {}
//
//    /** Push element x to the back of queue. */
//    void push(int x) {
//        Push.push(x);
//    }
//
//    /** Removes the element from in front of queue and returns that element. */
//    int pop() {
//        PushPos();
//        int ret = Pop.top();
//        Pop.pop();
//        return ret;
//    }
//
//    /** Get the front element. */
//    int peek() {
//        PushPos();
//        int ret = Pop.top();
//        return ret;
//    }
//
//    /** Returns whether the queue is empty. */
//    bool empty() {
//        return Push.empty() && Pop.empty();
//    }
//private:
//    stack<int>Push;
//    stack<int>Pop;
//    void PushPos()
//    {
//        if (Pop.empty())
//        {
//            while (!Push.empty())
//            {
//                Pop.push(Push.top());
//                Push.pop();
//            }
//        }
//    }
//};
//
///**
// * Your MyQueue object will be instantiated and called as such:
// * MyQueue* obj = new MyQueue();
// * obj->push(x);
// * int param_2 = obj->pop();
// * int param_3 = obj->peek();
// * bool param_4 = obj->empty();
// */
//
//int main()
//{
//
//
//	return 0;
//}