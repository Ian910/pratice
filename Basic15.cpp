
#include <iostream>
using namespace std;

int main()
{
	int j;
	float sum = 0;
	cout << "�п�J�f�~���";
	cin >> j;
	const int n = 1000;
	int score[n];
	for (int i = 1; i <= j; i++)
	{
		cout << "�п�J��" << i << "��f�~������";
		cin >> score[i];
	}
	for (int i = 1; i <= j; i++)
	{
		sum += score[i];
	}
	cout << "�����f�~�`����:" << sum << "��";





	system("pause");
	return 0;
}