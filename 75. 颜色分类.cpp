//#include<iostream>
//#include<vector>
//using namespace std;
///*给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。
//
//此题中，我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。
//
//注意:
//不能使用代码库中的排序函数来解决这道题。
//
//示例:
//
//输入: [2,0,2,1,1,0]
//输出: [0,0,1,1,2,2]
//*/
//void sortColors(vector<int>& nums) {
//   
//    int handleCount = 0;
//    int swapCount = 0;
//    int endPoint = nums.size() - 1;
//    int startPoint = 0;
//    while (startPoint <= endPoint) {
//        int newEndPoint = startPoint;
//        int newStartPoint = endPoint;
//        for (int j = startPoint; j < endPoint; j++) {
//            if (nums[j] > nums[j + 1]) {
//                swap(nums[j], nums[j + 1]);
//                swapCount++;
//                newEndPoint = j + 1;
//            }
//            handleCount++;
//        }
//        endPoint = newEndPoint - 1;//这里一个元素已经沉底了,所以下一次交换次数相比于最后一次交换要少1
//        for (int j = endPoint; j > startPoint; j--) {
//            if (nums[j] < nums[j - 1]) {//后一个元素小于上一个元素,往上移动一次
//                swap(nums[j], nums[j - 1]);
//                swapCount++;
//                newStartPoint = j - 1;
//            }
//            handleCount++;
//        }
//        startPoint = newStartPoint + 1;//这里一个元素到最上面了,所以下一次交换次数相比于上一次交换要少1
//    }
//}
//int main()
//{
//
//	return 0;
//}