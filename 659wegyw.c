#pragma warning(disable : 4996)
#include<stdio.h>
#include<CoreWindow.h>
#include<math.h>
void DigitSum(int n)
{

	if (n > 9)
	{
		printf(n / 10);
	}
	printf(n % 10);
	int sum = 0;
	sum += n;


}

int main()
{
	int num = 1234;
	DigitSum(num);
	system("pause");
	return 0;
}