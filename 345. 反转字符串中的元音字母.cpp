//#include<iostream>
//#include<string>
//
//using namespace std;
///*��дһ�����������ַ�����Ϊ���룬��ת���ַ����е�Ԫ����ĸ��
//
//ʾ�� 1:
//
//����: "hello"
//��� : "holle"
//*/
//class Solution {
//private:
//    bool isOrigin(char c) {
//        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//            return true;
//        else
//            return false;
//    }
//public:
//    string reverseVowels(string s) {
//        int i = 0, j = s.size();
//        while (i < j) {
//            if (!isOrigin(s[i])) {
//                i++;
//                continue;
//            }
//            if (!isOrigin(s[j])) {
//                j--;
//                continue;
//            }
//            swap(s[i++], s[j--]);
//        }
//        return s;
//    }
//};
//int main()
//{
//
//	return 0;
//}