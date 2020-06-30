#include <iostream>
using namespace std;

int main() 
{
	char password[20];
	cout << "請輸入密碼(可包含空白鍵):";
	gets_s(password);
	cout << "加密後的密碼是:";
	for (int i = 0; i < strlen(password); i++)
	{
		password[i]--;
		cout << password[i];
	}
	cout << "\n";


	system("pause");
	return 0;
}