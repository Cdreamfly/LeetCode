//#include<iostream>
//#include<stack>
//using namespace std;
////����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ������ж��ַ����Ƿ���Ч��
//bool isValid(string s) {
//    stack<char>S;
//    for (int i = 0; i < s.size(); ++i) {
//        char c = s.at(i);
//        if (c == '(' || c == '[' || c == '{') {
//            S.push(c);
//        }
//        else {
//            if (S.empty()) {
//                return false;
//            }
//            char topChar = S.pop();
//            if (c == ')' && topChar != '(') {
//                return false;
//            }
//            if (c == ']' && topChar != '[') {
//                return false;
//            }
//            if (c == '}' && topChar != '{') {
//                return false;
//            }
//        }
//    }
//    return S.empty();
//}
//
//int main()
//{
//
//
//	return 0;
//}