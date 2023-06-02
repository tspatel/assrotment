#include<stdio.h>
main()
{
	int a[10][10],trans[10][10],i,j,r,c;
	
	printf("enter rows and columns=\n");
	scanf("%d%d",&r,&c);
	
	printf("enter element of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("transpose of a matrix \n");
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",trans[i][j]);
		}
	}
	printf("\n");
}
