//#include<iostream>
//#include<vector>
//using namespace std;
///*����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
//
//ʾ��:
//
//����: [0,1,0,3,12]
//���: [1,3,12,0,0]
//˵��:
//
//������ԭ�����ϲ��������ܿ�����������顣
//�������ٲ���������*/
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int count = 0;
//        for (auto it = nums.begin(); it != nums.end();)
//        {
//            if (*it == 0)
//            {
//                nums.erase(it);
//                ++count;
//            }
//            else
//            {
//                ++it;
//            }
//        }
//        nums.insert(nums.end(), count, 0);
//    }
//};
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        for (int i = 0, j = 0; i < nums.size(); ++i)
//        {
//            if (nums[i] != 0)
//            {
//                swap(nums[i], nums[j++]);
//            }
//        }
//    }
//};
//
//int main()
//{
//
//
//
//	return 0;
//}