#include <iostream>
using namespace std;

int main()
{
	string number;
	cout << "�п�J���Z(0~100)�G";
	cin >> number;
	if (number >= "90")
	{
		cout << "�u��\n";
	}
	else if(number >= "80")
	{
		cout << "�ҵ�\n";
	}
	else if (number >= "70")
	{
		cout << "�A��\n";
	}
	else if (number >= "60")
	{
		cout << "����\n";
	}
	else 
	{
		cout << "�B��\n";
	}


	system("pause");
	return 0;
}