#include <iostream>
using namespace std;

int main() 
{
	char password[20];
	cout << "�п�J�K�X(�i�]�t�ť���):";
	gets_s(password);
	cout << "�[�K�᪺�K�X�O:";
	for (int i = 0; i < strlen(password); i++)
	{
		password[i]--;
		cout << password[i];
	}
	cout << "\n";


	system("pause");
	return 0;
}