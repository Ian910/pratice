#include <iostream>
using namespace std;

int main()
{
	int k, n,j;
	float sum=0, ave=0;
	cout << "�п�J�ʦҾǥͪ��y��:";
	cin >> k;
	for (j = 1; j >= 0; j++)
	{
		if (j == k)
		{
			continue;
		}
		cout << "�п�J��" << j << "�������Z:";
		cin >> n;
		if (n == -1)
		{
			break;
		}
		sum += n;
	}
	ave = sum / (j-1);
	cout << "���Z���Z��" << sum << "��, ������" << ave << "��";

	 


	system("pause");
	return 0;
}