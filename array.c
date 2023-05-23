#include<stdio.h>
int main()
{
	int a[500],n,i;
	printf("enter how many elements you need:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements in the array are :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
