#include <iostream>
using namespace std;

int main()
{
	int number;
	printf("請輸入現在是第幾季：");
	scanf_s("%d", &number);
	switch (number)
	{
	case 4:
		printf("現在是冬天\n");
		break;
	case 3:
		printf("現在是秋天\n");
		break;
	case 2:
		printf("現在是夏天\n");
		break;
	case 1:
		printf("現在是春天\n");
		break;
	default:
		printf("輸入的數字是不正確的!\n");
		break;
	}
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
