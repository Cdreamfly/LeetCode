//#include"LeetCode.h"
//using namespace std;
///*
//������������������дһ�����������������Ƿ���ͬ��
//
//����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�
//
//ʾ�� 1:
//
//����:       1         1
//          / \       / \
//         2   3     2   3
//
//        [1,2,3],   [1,2,3]
//
//���: true
//ʾ�� 2:
//
//����:      1          1
//          /           \
//         2             2
//
//        [1,2],     [1,null,2]
//
//���: false
//ʾ�� 3:
//
//����:       1         1
//          / \       / \
//         2   1     1   2
//
//        [1,2,1],   [1,1,2]
//
//���: false*/
//
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
// 
//class Solution {
//public:
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//        if (p == nullptr && q == nullptr)return true;
//        if (p == nullptr || q == nullptr)return false;
//        if (p->val != q->val)return false;
//        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//    }
//};
//int main()
//{
//
//	return 0;
//}