#include <iostream>
using namespace std;

int main()
{
	int i = 1, n, sum = 0, ave;
	while (i)
	{
		cout << "請輸入第" << i << "位學生的成績:";
		cin >> n;
		i++;
		if (n < 0)
		{
			break;
		}
		sum += n;
	}
	ave = sum / (i - 2);
	cout << "全班總成績為:" << sum << "分, 平均為" << ave << "分";
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int i = 1, n, sum = 0, ave;
	do
	{
        cout << "請輸入第" << i << "位學生的成績:";
		cin >> n;
		i++;
		sum += n;
	} 
	while (n > 0);
	sum = sum - n;
	ave = sum / (i-2);
	cout << "全班總成績為:" << sum << "分, 平均為" << ave << "分";
	system("pause");
	return 0;
}
