#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "請輸入現在是第幾季：";
	cin >> number;
	switch (number)
	{
	case 4:
		cout << "現在是冬天\n";
		break;
	case 3:
		cout << "現在是秋天\n";
		break;
	case 2:
		cout << "現在是夏天\n";
		break;
	case 1:
		cout << "現在是春天\n";
		break;
	default:
		cout << "輸入的數字是不正確的!\n";
		break;
	}
	


	system("pause");
	return 0;
}