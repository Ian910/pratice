#include <iostream>
using namespace std;

int main()
{
	int sum=0.00, n;
	float ave;
	for (int i = 1; i <= 5; i++)
	{
		cout << "請輸入第" << i << "位學生的成績:";
		cin >> n;
		sum += n;
    }
	ave = sum / 5;
	cout << "全班總成績為:" << sum << "分,\t平均為" << ave << "分";
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{	
	int sum = 0.00, n;
	float ave;
	for (int i = 1; i <= 5; i++)
	{
		printf("請輸入第%d位學生的成績:",i);
		scanf_s("%d",&n);
		sum += n;
	}
	ave = sum / 5;
	printf("全班總成績為:%d分,\t平均為%0.0f分",sum,ave);
	system("pause");
	return 0;
}
