//#include<iostream>
//#include<set>
//#include<string>
//#include<vector>
//using namespace std;
//
//int uniqueMorseRepresentations(vector<string>& words) {
//    set<string> st;
//    string codes[] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
//    for (int i = 0; i < words.size(); i++) {
//        string str;
//        string word = words[i];
//        for (int j = 0; j < word.size(); j++) {
//            str += codes[word[j] - 'a'];
//        }
//        st.insert(str);
//    }
//    return st.size();
//}
//int main()
//{
//
//	return 0;
//}