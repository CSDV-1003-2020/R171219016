#include<stdio.h>

int main()
{
	int a,b=0;
	for(a=1;a<=10;a++)
	{
		printf("%d\n",a);
		b=b+a;
	}

	printf("sum is: %d\n",b);
	printf("Thankyou");
	return 0;
}

