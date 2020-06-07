#include"LeetCode.h"

vector<int> getStrongest(vector<int>& arr, int k) {
	sort(arr.begin(), arr.end());
    int m = (arr.size() - 1) / 2;
    vector<int>v;
    int i = 0;
    int j = arr.size() - 1;
    while (k > 0)
    {
        if (abs(arr[i] - arr[m]) > abs(arr[j] - arr[m]))
        {
            v.push_back(arr[i]);
            ++i;
        }
        else if(abs(arr[i] - arr[m]) < abs(arr[j] - arr[m]))
        { 
            v.push_back(arr[j]);
            --j;
        }
        else
        {
            v.push_back(arr[j]);
            --j;
        }
        --k;
    }
    return v;
}
int main()
{
    vector<int>v{ 6,-3,7,2,11 };
    v = getStrongest(v, 3);
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
	return 0;
}