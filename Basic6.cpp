#include <iostream>
using namespace std;

int main()
{
	string number;
	cout << "請輸入成績：";
	cin >> number;
	if (number >= "60")
	{
		cout << "及格!\n";
	}
	else
	{
		cout << "不及格!\n";
	}



	system("pause");
	return 0;
}