#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << "請輸入姓名：";
	cin >> name;
	cout << "\n歡迎" << name << "\t使用本軟體";
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	char name[100];
	printf("請輸入姓名：");
	scanf_s("%s",&name);
	printf("\n歡迎,%s,\t使用本軟體", name);	
	system("pause");
	return 0;
}
