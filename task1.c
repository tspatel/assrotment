#include<stdio.h>
main()
{
	int i,n,a[100];
	printf("enter the array size =");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("negative elements are=%d",a[i]);
		}
	}
}
