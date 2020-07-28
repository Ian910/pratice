#include <iostream>
using namespace std;

int main()
{
	float int1;
	cout << "請輸入國文成績：";
	cin >> int1;
	int1 >= 60 ? cout << "成績及格，恭喜!" : cout << "成績不及格，再加油!";
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int num;
	printf("請輸入國文成績：");
	scanf("%d",num);
	num >= 60 ? printf("成績及格，恭喜!") : printf("成績不及格，再加油!");
	system("pause");
	return 0;
}
