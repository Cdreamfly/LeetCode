//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*
//����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ�����������Σ������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
//
//ʾ�� 1:
//
//���� nums = [1,1,1,2,2,3],
//
//����Ӧ�����³��� length = 5, ����ԭ�����ǰ���Ԫ�ر��޸�Ϊ 1, 1, 2, 2, 3 ��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//*/
//int removeDuplicates(vector<int>& nums) {
//    int j = 1;
//    if (nums.size() <= 2)return nums.size();
//    for (int i = 2; i < nums.size(); ++i)
//    {
//        if (nums[i] != nums[j - 1])
//        {
//            nums[++j] = nums[i];
//        }
//    }
//    return j + 1;
//
//}
//
//int main()
//{
//    
//	return 0;
//}