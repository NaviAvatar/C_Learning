#include<stdio.h>
#define SWAP(a,b,c) {(c) = (a); (a)=(b); (b)=(c);}
int main()
{
	int fahr;
	int a = 10, b=102, c;
	for(fahr = 300; fahr >=0; fahr -= 20)
	{
		printf("%3d   %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}
	SWAP(a,b,c);

	printf("a=%3d\tb=%3d",a ,c);
	return 0;
}
