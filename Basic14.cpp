#include <iostream>
using namespace std;

int main(){
	int a[] = { 20, 45, 98, 23, 85 };
	int tem;
	cout << "�Ƨǫe�ƭȧǦC:\n" ;
	for (int i = 0; i <= 4; i++)
	{
		cout << a[i] << " ";
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j <= 4; j++)
		{
			if (a[i] < a[j])
			{
				tem = a[i];
				a[i] = a[j];
				a[j] = tem;
			}
		}
	}
	cout << "\n�Ѥj��p�Ƨǫ�\n";
	for (int i = 0; i <= 4; i++)
	{
		cout << a[i] << " ";
	}

	system("pause");
	return 0;
}