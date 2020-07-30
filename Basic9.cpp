#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		int sum=0, n, ave;
		cout << "第" << i << "個班級\n";
		for(int j=1;j<=4;j++)
		{
			cout << "請輸入第" << j << "位學生的成績:";
			cin >> n;
			sum += n;
			ave = sum / 4;
		}
	cout << "第" << i << "班總成績為:" << sum << "分, 平均為" << ave << "分\n";
        }
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		int n;
		float ave,sum = 0.00;
		printf("第%d個班級\n",i);
		for (int j = 1; j <= 4; j++)
		{
			printf("請輸入第%d位學生的成績:",j);
			scanf_s("%d",&n);
			sum += n;
			ave = sum / 4;
		}
		printf("第%d班總成績為:%0.0f分,平均為%-1.2f分\n",i,sum,ave);
	}
	system("pause");
	return 0;
}
