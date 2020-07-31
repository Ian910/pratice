#include <iostream>
using namespace std;

int main()
{
	int j;
	float sum = 0;
	cout << "請輸入貨品件數";
	cin >> j;
	const int n = 1000;
	int score[n];
	for (int i = 1; i <= j; i++)
	{
		cout << "請輸入第" << i << "件貨品的價格";
		cin >> score[i];
	}
	for (int i = 1; i <= j; i++)
	{
		sum += score[i];
	}
	cout << "全部貨品總價為:" << sum << "元";
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int j;
	float sum = 0.00;
	printf("請輸入貨品件數");
	scanf_s("%d",&j);
	const int n = 1000;
	int score[n];
	for (int i = 1; i <= j; i++)
	{
		printf("請輸入第%d件貨品的價格",i);
		scanf_s("%d",&score[i]);
	}
	for (int i = 1; i <= j; i++)
	{
		sum += score[i];
	}
	printf("全部貨品總價為:%0.2f元",sum);
	system("pause");
	return 0;
}
