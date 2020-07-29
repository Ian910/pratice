#include <iostream>
using namespace std;

int main()
{
	float radius,height,volume;
	cout << "請輸入圓柱體的半徑(公分)：";
	cin >> radius;
	cout << "請輸入圓柱體的高(公分)：";
	cin >> height;
	volume = radius * radius * height * 3.14;
	cout << "圓柱體的體積：" << volume << "立方公分\n";
	system("pause");
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	float radius, height, volume;
	printf("請輸入圓柱體的半徑(公分)：");
	scanf_s("%f", &radius);
	printf("請輸入圓柱體的高(公分)：");
	scanf_s("%f", &height);
	volume = radius * radius * height * 3.14;
	printf("圓柱體的體積：%0.2f立方公分\n", volume);
	system("pause");
	return 0;
}
