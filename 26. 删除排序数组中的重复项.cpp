//#include<iostream>
//#include<vector>
//using namespace std;
///*
//���� nums = [0,0,1,1,1,2,2,3,3,4],
//
//����Ӧ�÷����µĳ��� 5, ����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//*/
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int len = nums.size();
//        if (len == 0)return 0;
//        int i = 0;
//        int j = 1;
//        while (j < len)
//        {
//            if (nums[i] != nums[j])
//            {
//                nums[++i] = nums[j];
//            }
//            ++j;
//        }
//    }
//};
//
//int main()
//{
//
//
//	return 0;
//}