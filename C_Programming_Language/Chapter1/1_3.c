#include<stdio.h>

// 摄氏度和华氏度之间的转化：C=（5/9）（F-32）
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* 温度表下限*/
	upper = 300;/* 温度表上限*/
	step = 20; /* 步长 */

	fahr = lower;
	// printf("%3s\t%6s\n", "华氏", "摄氏");
	printf("%s\t%s\n", "华氏", "摄氏");
	while(fahr <= upper)
	{
		celsius = 5*(fahr-32)/9;
		// printf("%d\t%d\n", fahr, celsius);
		// printf("%d\t%d\n", fahr, celsius);
		// printf("%3.2f\t%6.2f\n", fahr, celsius);
		printf("%3.2f\t%6.2f\n", fahr, celsius);
		// printf("%o\t%x\n", step, upper);
		fahr = fahr + step;
	}
}
