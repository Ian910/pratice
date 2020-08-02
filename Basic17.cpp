#include <iostream>
using namespace std;

int main() 
{
	string Score[3][2] = { {"陳品錞","9/28"},{"黃佩宣","3/25"},{"江雨瞳","3/28"} };
	for (int i = 0; i < 3; i++)
	{
		cout << Score[i][0] << "最喜歡吃的水果是" << Score[i][1]<<"\n";
	}
}
