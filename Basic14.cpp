#include <iostream>
using namespace std;

int main()
{
	int num[] = { 67,12,9,52,91,3 };
	int tem, s, i, j, min, max, mid;
	bool Isfound;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 6; j++)
		{
			if (num[i] > num[j])
			{
				tem = num[i];
				num[i] = num[j];
				num[j] = tem;
			}
		}
	}
	/*for (i = 0; i < 6; i++)
	{
		cout << num[i]<<" ";
	}*/
	for (;;)
	{
		Isfound = false;
		min = 0;
		max = 5;
		cout << "請輸入查詢號碼:";
		cin >> s;
		while (min <= max)
		{
			mid = (min + max) / 2;
			if (num[mid] == s)
			{
				Isfound = true;
				break;
			}
			if (num[mid] > s)
			{
				max = mid - 1;
			}
			else
			{
				min = mid + 1;
			}
		}
		if (Isfound == true)
		{
			cout << num[mid] << "在陣列中!\n";
		}
		else
		{
			cout << s << "不在陣列中!\n";
		}
	}


	system("pause");
	return 0;
}
