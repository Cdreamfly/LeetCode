//#include<iostream>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//
//int lengthOfLastWord(string s) {
//    int len = s.size();
//    int num = 0;
//    for (int i = len - 1; i >= 0; i--) {
//        if (s[i] != ' ')
//            num++;
//        else {
//            if (num != 0)
//                return num;
//        }
//    }
//    return num;
//}
//
//int main()
//{
//	string s = "hello";
//	cout << lengthOfLastWord(s) << endl;
//
//	return 0;
//}