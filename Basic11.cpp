#include <iostream>
using namespace std;

int main()
{
	int i = 1, n, sum = 0,ave;
	do 
	{
		cout << "�п�J��" << i << "��ǥͪ����Z:";
		cin >> n;
		i++;
	    sum += n;	
	} while (n >= 0);
	sum -= n;
	ave = sum / (i-2);
	cout << "���Z�`���Z��:" << sum << "��, ������" << ave << "��";





	system("pause");
	return 0;
}