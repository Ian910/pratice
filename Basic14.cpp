#include <iostream>
using namespace std;

int main(){
	int a[] = { 20, 45, 98, 23, 85 };
	int tem;
	cout << "排序前數值序列:\n" ;
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
	cout << "\n由大到小排序後\n";
	for (int i = 0; i <= 4; i++)
	{
		cout << a[i] << " ";
	}

	system("pause");
	return 0;
}
