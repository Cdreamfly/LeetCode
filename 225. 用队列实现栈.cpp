//#include<iostream>
//#include<queue>
//using namespace std;
//
//class MyStack {
//public:
//    /** Initialize your data structure here. */
//    MyStack() {
//
//    }
//
//    /** Push element x onto stack. */
//    void push(int x) {
//        q.push(x);
//    }
//
//    /** Removes the element on top of the stack and returns that element. */
//    int pop() {
//        int size = q.size();
//        for (int i = 0; i < size - 1; ++i)
//        {
//            q.push(q.front());
//            q.pop();
//        }
//        int ret = q.front();
//        q.pop();
//        return ret;
//    }
//
//    /** Get the top element. */
//    int top() {
//       int size = q.size();
//        for (int i = 0; i < size - 1; ++i)
//        {
//            q.push(q.front());
//            q.pop();
//        }
//        int ret = q.front();
//        q.push(ret);
//        q.pop();
//        return ret;
//    }
//
//    /** Returns whether the stack is empty. */
//    bool empty() {
//        return q.empty();
//    }
//private:
//    queue<int>q;
//};
//
///**
// * Your MyStack object will be instantiated and called as such:
// * MyStack* obj = new MyStack();
// * obj->push(x);
// * int param_2 = obj->pop();
// * int param_3 = obj->top();
// * bool param_4 = obj->empty();
// */
//
//
//int main()
//{
//    queue<int>q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    for (int i = 0;i<q.size();++i)
//    {
//        cout <<q.back() << " ";
//    }
//	return 0;
//}