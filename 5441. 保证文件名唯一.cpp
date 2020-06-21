//#include"LeetCode.h"
//
//using namespace std;
//
//vector<string> getFolderNames(vector<string>& names) {
//    unordered_map<string, int> H;
//    vector<string> res;
//    for (int i = 0; i < names.size(); ++i)
//    {
//        int tmp = H[names[i]];
//        if (tmp == 0)
//        {
//            res.push_back(names[i]);
//            H[names[i]] = 1;
//        }
//        else
//        {
//            while (H.count(names[i] + "(" + to_string(tmp) + ")")) tmp++;
//            res.push_back(names[i] + "(" + to_string(tmp) + ")");
//            H[names[i]] = tmp;
//            H[names[i] + "(" + to_string(tmp) + ")"] = 1;
//        }
//    }
//    return res;
//}
//int main()
//{
//	vector<string>v{"kaido","kaido(1)","kaido","kaido(1)"};
//	v = getFolderNames(v);
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	return 0;
//}