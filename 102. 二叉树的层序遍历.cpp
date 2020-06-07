//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//    
//};
//
//vector<vector<int>> levelOrder(TreeNode* root) {
//    queue<TreeNode*>s;
//    vector<vector<int>>v;
//    if (nullptr == root)return v;
//    TreeNode* cur;
//    int size = 0;
//    s.push(root);
//    while (!s.empty())
//    {
//        size = s.size();
//        vector<int>a;
//        
//        for (int i = 0; i < size; ++i)
//        {
//            cur = s.front();
//            a.push_back(cur->val);
//            s.pop();
//            if (nullptr != cur->left)
//            {
//                s.push(cur->left);
//            }
//            if (nullptr != cur->right)
//            {
//                s.push(cur->right);
//            }
//        }
//        
//        v.push_back(a);
//    }
//    return v;
//}
//
//
//int main()
//{
//
//	return 0;
//}