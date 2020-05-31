#include <iostream>
using namespace std;

int main()
{
	short first, second, third;
	cout << "請輸入第一天的支出：";
	cin >> first;
	cout << "請輸入第二天的支出：";
	cin >> second;
	cout << "請輸入第三天的支出：";
	cin >> third;
	int sum = first + second + third;
	float ave = sum / 3;
	cout << "您的總支出為" << sum << "元\n平均每天支出為"<<ave<<"元";




	system("pause");
	return 0;
}