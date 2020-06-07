//#include<iostream>
//#include<vector>
//using namespace std;
//int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
//	int num = 0;
//	for (int i = 0; i < startTime.size(); ++i)
//	{
//		for (int j = startTime[i]; j <= endTime[i]; ++j)
//		{
//			cout << startTime[i] << " " << endTime[i] << endl;
//			if (j == queryTime)
//			{
//				++num;
//				break;
//			}
//			
//		}
//	}
//	return num;
//}
//int main()
//{
//	vector<int>v1{ 9,8,7,6,5,4,3,2,1 };
//	vector<int>v2{ 10,10,10,10,10,10,10,10,10 };
//	busyStudent(v1, v2, 5);
//	return 0;
//}