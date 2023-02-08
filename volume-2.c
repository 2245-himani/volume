#include<stdio.h>
struct marks
{
	int rollno;
	char name[30];
	float chemmarks, mathsmarks,phymarks,percentage;
};
int main()
{
	struct marks marks[5];
	int i;
	for(i=0;i<4;i++){
		printf("student %d\n",i+1);
		printf("Enter rollno :");
			scanf("%d",&marks[i].rollno);
			printf("Enter name :");
				scanf("%s",marks[i].name);
			printf("Enter chamistry marks out of 100 :");
			scanf("%f",&marks[i].chemmarks );
			printf("Enter maths marks out of 100 :\n");
			scanf("%f",&marks[i].mathsmarks);
			printf("Enter physics marks out of 100 :\n");
			scanf("%f",&marks[i].phymarks);
	}
	for(i=0;i<4;i++)
	{
		printf("student %d\n",i+1);
		float per=(marks[i].chemmarks+marks[i].mathsmarks+marks[i].phymarks)*100/300.0;
		printf("percentage : %f\n",per);
	}
}

