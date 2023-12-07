#include<stdio.h>

void main(){
	 int n;
	printf("enter the array size: ");
	scanf("%d",&n);
	
	int a[n];
	
	int i;
	printf("enter the elemnts of array A\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	int m;
	printf("enter the array size: ");
	scanf("%d",&m);
	
	int b[m];

	
	printf("enter the elemnts of array B\n");
	
	for(i=0;i<m;i++)
	{ 
		printf("enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	
	int c[n+m];
	for(i=0;i<n;i++){
		c[i]=a[i];
	}
	for(i=0;i<m;i++){
		c[n+i]=b[i];
	}
	printf("Array c:- ");
	for(i=0;i<n+m;i++){
		printf("%d ",c[i]);
	}
	

	
}	

