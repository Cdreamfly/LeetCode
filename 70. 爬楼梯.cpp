//#include"LeetCode.h"
//
//using namespace std;
///*
//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
//
//注意：给定 n 是一个正整数。
//
//示例 1：
//
//输入： 2
//输出： 2
//解释： 有两种方法可以爬到楼顶。
//1.  1 阶 + 1 阶
//2.  2 阶
//*/
//
//int climbStairs(int n) {
//	if (n <= 2)return n;
//	int f1 = 1, f2 = 2;
//	int sum = 0;
//	for (int i = 3; i <= n; ++i)
//	{
//		sum = f1 + f2;
//		f1 = f2;
//		f2 = sum;
//	}
//	return sum;
//}
//
//int main()
//{
//
//	return 0;
//}