#include <iostream>
using namespace std;

int main()
{
	
	for (int i = 1; i <= 5; i++)
	{int sum=0, n, ave;
		cout << "��" << i << "�ӯZ��\n";
		for(int j=1;j<=4;j++)
		{
			cout << "�п�J��" << j << "��ǥͪ����Z:";
			cin >> n;
			sum += n;
			ave = sum / 4;
		
		}
	cout << "��" << i << "�Z�`���Z��:" << sum << "��, ������" << ave << "��\n";
    }
	





	system("pause");
	return 0;
}