#include<stdio.h>
struct distance
{
	int feet;
	float inch;
}h1,h2,sum;
main()
{
	printf("Enter 1st distance\n");
	printf("Enter feet : ");
	scanf("%d",&h1.feet);
	printf("Enter inch : ");
	scanf("%f",&h1.inch);
	
	printf("Enter 2nd distance\n");
	printf("Enter feet : ");
	scanf("%d",&h2.feet);
	printf("Enter inch : ");
	scanf("%f",&h2.inch);
	
	sum.feet=h1.feet+h2.feet;
	sum.inch=h1.inch+h2.inch;
	
	printf("\n sum is distance=%d\n %f\n",sum.feet,sum.inch);
}
