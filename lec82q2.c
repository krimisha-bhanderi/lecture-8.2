#include<stdio.h>
void main()
{
	int s,e;
	int leap[50];
	printf("enter the first year:");
	scanf("%d",&s);
	
    printf("enter the second year:");
	scanf("%d",&e);
	int i,cnt=0;
	
	printf("leap year between first year and second year is:\n");
	
	for(i=s;i<=e;i++)
	{
		if(i%4==0 || i%100==0 || i%400==0)
		{	
			cnt++;
			leap[cnt] = i;
			printf("%d ",leap[cnt]);
		}
}
}
