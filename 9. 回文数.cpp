//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x < 0)return false;
//        if (x < 10)return true;
//        if ((x % 10) == 0)return false;
//
//        int res = 0;
//        while (x > res) {
//            res = 10 * res + (x % 10);
//            x = x / 10;
//        }
//        return x == res || x == res / 10;
//    }
//};
//int main()
//{
//
//
//	return 0;
//}