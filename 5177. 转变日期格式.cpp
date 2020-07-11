#include"LeetCode.h"
using namespace std;

string reformatDate(string date) {
	vector<string>str2= { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	unordered_map<string, int>map;
	int num = 1;
	for (auto i : str2)
	{
		map[i] = num;
		++num;
	}
	string str = "";
	str += date.substr(date.length() - 4, 4) + "-";
	if (date[3] != ' ')
	{
		if (map[date.substr(5, 3)] < 10)
		{
			str += "0" + to_string(map[date.substr(5, 3)]) + "-";
		}
		else
		{
			str += to_string(map[date.substr(5, 3)]) + "-";
		}
		str += date.substr(0, 2);
	}
	else
	{
		if (map[date.substr(4, 3)] < 10)
		{
			str += "0" + to_string(map[date.substr(4, 3)]) + "-";
		}
		else
		{
			str += to_string(map[date.substr(4, 3)]) + "-";
		}
		str += +"0" + date.substr(0, 1);
	}
	return str;
}

int main()
{
	cout<<reformatDate("6th Jan 2052");

	return 0;
}