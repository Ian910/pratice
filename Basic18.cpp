#include <iostream>
using namespace std;
float Temperature(int);
int main()
{
	int value;
	float result;
    cout << "請輸入華氏溫度:";
	cin >> value;
	result = Temperature(value);
	cout << "攝氏溫度=" << result;
	system("pause");
	return 0;
}
float Temperature(int value)
{
	return (value - 32) / 1.8;
}
