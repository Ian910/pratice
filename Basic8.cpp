#include <iostream>
using namespace std;

int main()
{
	int sum=0.00, n;
	float ave;
	for (int i = 1; i <= 5; i++)
	{
		cout << "�п�J��" << i << "��ǥͪ����Z:";
		cin >> n;
		sum += n;
    }
	ave = sum / 5;
	cout << "���Z�`���Z��:" << sum << "��,\t������" << ave << "��";





	system("pause");
	return 0;
}