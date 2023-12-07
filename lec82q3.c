#include<stdio.h>
main()
{
	int n;
	
	printf("enter the array size:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum=0;
	printf("enter the array element:\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("the square of the array element is:\n");
	
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]*a[i]);
    }
	 	

}
