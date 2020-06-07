//#include<iostream>
//#include<map>
//using namespace std;
//class Solution {
//public:
//    int romanToInt(string s) {
//        int val = 0;
//        map<char, int> mp;
//        mp.insert(map<char, int>::value_type('I', 1));
//        mp.insert(map<char, int>::value_type('V', 5));
//        mp.insert(map<char, int>::value_type('X', 10));
//        mp.insert(map<char, int>::value_type('L', 50));
//        mp.insert(map<char, int>::value_type('C', 100));
//        mp.insert(map<char, int>::value_type('D', 500));
//        mp.insert(map<char, int>::value_type('M', 1000));
//        for (int i = 0; i < s.length(); ++i)
//        {
//            if (mp[s[i]] >= mp[s[i + 1]])
//            {
//                val += mp[s[i]];
//            }
//            else
//            {
//                val += mp[s[i + 1]] - mp[s[i]];
//                ++i;
//            }
//        }
//        return val;
//    }
//};
//int main()
//{
//
//
//	return 0;
//}