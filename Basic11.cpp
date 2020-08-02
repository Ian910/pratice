#include <iostream>
using namespace std;

int main()
{
	int k, n,j;
	float sum=0, ave=0;
	cout << "請輸入缺考學生的座號:";
	cin >> k;
	for (j = 1; j >= 0; j++)
	{
		if (j == k)
		{
			continue;
		}
		cout << "請輸入第" << j << "號的成績:";
		cin >> n;
		if (n == -1)
		{
			break;
		}
		sum += n;
	}
	ave = sum / (j-1);
	cout << "全班成績為" << sum << "分, 平均為" << ave << "分";
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int k, n, j;
	float sum = 0.00, ave = 0;
	printf( "請輸入缺考學生的座號:");
	scanf_s("%d",&k);
	for (j = 1; j >= 0; j++)
	{
		if (j == k)
		{
			continue;
		}
		printf( "請輸入第%d號的成績:",j);
		scanf_s("%d",&n);
		if (n == -1)
		{
			break;
		}
		sum += n;
	}
	ave = sum / (j - 1);
	printf("全班成績為%0.2f分, 平均為%0.2f分",sum,ave); 
	system("pause");
	return 0;
}
