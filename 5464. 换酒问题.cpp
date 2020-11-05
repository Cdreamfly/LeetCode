//#include"LeetCode.h"
//using namespace std;
//
//
//int numWaterBottles(int numBottles, int numExchange) {
//    if (numBottles < numExchange)return numBottles;
//    int count = numBottles;
//    while (numBottles >= numExchange)
//    {
//        int n = numBottles;
//        numBottles /= numExchange;
//        n = n - numBottles * numExchange;
//        count += numBottles;
//        numBottles += n;
//    }
//    return count;
//}
//
//int main()
//{
//    cout<<numWaterBottles(15, 4);
//	return 0;
//}