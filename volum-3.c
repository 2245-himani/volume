#include<stdio.h>
enum week
{
	sunday,monday,tuseday,Wednesday,Thursday,friday,saturday
};
main()
{
	char n;
	printf("Enter any value of n:");
	scanf("%c",&n);
	switch(n)
	{
		case 'S':
		printf("%d",sunday);
		break;
		
		case 'M':
			printf("%d",monday);
			break;
			
		case 't':
			printf("%d",tuseday);
			break;
			
		case 'W':
			printf("%d",Wednesday);
			break;
			
		case 'T':
			printf("%d",Thursday);
			break;
			
		case 'F':
			printf("%d",friday);
			break;
		
		case 's':
			printf("%d",saturday);
			break;
			
	}
}
