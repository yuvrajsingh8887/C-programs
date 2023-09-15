#include<stdio.h>
int main()
{	int m,n,i,j,s=0;
	printf("Enter the number of rows and columns");
	scanf("%d%d",&m,&n);
	if (m==n)
	{int a[m] [n];
	printf("Enter %d elements",m*n);
	for(i=0;i<=m-1;i++)                                                
	{for(j=0;j<=n-1;j++)
		{scanf("%d",&a[i][j]);
		if(i==j || i+j==m-1)
		s+=a[i][j];}}
	printf("2D array\n");
	for(i=0;i<=m-1;i++)
	{for(j=0;j<=n-1;j++){
	printf("%d\t",a[i][j]);}
	printf("\n");}
	printf("the sum of diagonals is %d",s);
}}

		
