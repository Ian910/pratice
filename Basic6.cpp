#include <iostream>
using namespace std;

int main()
{
	string number;
	cout << "請輸入成績(0~100)：";
	cin >> number;
	if (number >= "90")
	{
		cout << "優等\n";
	}
	else if(number >= "80")
	{
		cout << "甲等\n";
	}
	else if (number >= "70")
	{
		cout << "乙等\n";
	}
	else if (number >= "60")
	{
		cout << "丙等\n";
	}
	else 
	{
		cout << "丁等\n";
	}
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int number;
	printf("請輸入成績(0~100)：");
	scanf_s("%d", &number);
	if (number >= 90)
	{
		printf("優等\n");
	}
	else if (number >= 80)
	{
		printf("甲等\n");
	}
	else if (number >= 70)
	{
		printf("乙等\n");
	}
	else if (number >= 60)
	{
		printf("丙等\n");
	}
	else
	{
		printf("丁等\n");
	}
	system("pause");
	return 0;
}
