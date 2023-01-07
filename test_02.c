#define  _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

int main()
{
	int i;
	int num[10] = { 0 };
	int max = num[0];
	float ave = 0;
	float sum = 0;

	printf("Please enter ten integers:\n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d",&num[i]);
		sum += num[i];
		if (num[i] > max)
		{
			max = num[i];
		}
	}

	printf("max = %d\n", max);
	printf("sum = %f\n", sum);
	printf("ave = %f\n", sum/10);

	return 0;
}