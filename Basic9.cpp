#include <iostream>
using namespace std;

int main()
{
	
	for (int i = 1; i <= 5; i++)
	{int sum=0, n, ave;
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