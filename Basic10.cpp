#include <iostream>
using namespace std;

int main()
{
	int i = 1, n, sum = 0,ave;
	while (i)
	{
		cout << "�п�J��" << i << "��ǥͪ����Z:";
		cin >> n;
		i++;
		if (n < 0)
		{
			break;
		}
		sum += n;
    }
     ave = sum / (i-2);
	 cout << "���Z�`���Z��:" << sum << "��, ������" << ave << "��";




	system("pause");
	return 0;
}