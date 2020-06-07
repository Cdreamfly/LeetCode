//#include<iostream>
//#include<string>
//using namespace std;
///*
//给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
//
//说明：本题中，我们将空字符串定义为有效的回文串。
//
//示例 1:
//
//输入: "A man, a plan, a canal: Panama"
//输出: true
//*/
//bool isPalindrome(string s) {
//	string str = "";
//	for (auto c : s) if (isalnum(c)) str += tolower(c);
//	for (int i = 0, j = str.size(); i < j / 2; ++i)
//		if (str[i] != str[j - 1 - i]) return false;
//	return true;
//}
//int main()
//{
//
//	return 0;
//}