//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
///*����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
//���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//
//����Լ������������ظ�Ԫ�ء�
//
//ʾ�� 1:
//
//����: [1,3,5,6], 5
//���: 2
//*/
//
//int searchInsert(vector<int>& nums, int target) {
//    for (int i = 0; i < nums.size(); ++i)
//    {
//        if (nums[i] == target)
//        {
//            return i;
//        }
//        else if (nums[i] > target)
//        {
//            return i;
//        }
//        else if (nums[nums.size() - 1] < target)
//        {
//            return nums.size();
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    vector<int>v = { 1,3,5,6 };
//    cout << searchInsert(v, 7) << endl;
//	return 0;
//}