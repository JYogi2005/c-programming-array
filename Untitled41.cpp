/*spiral*/
#include <stdio.h>
int main()
{
int a[6][6];
int n,i,j,s,k=1,r,t,x,y;
printf("enter n=");
scanf("%d",&n);

for(i=0;i<((n+1)/2);i++)
{
	for(j=i;j<n-i;j++)
	a[i][j]=k++;
	
	for(s=i+1;s<n-i;s++)
	a[s][n-i-1]=k++;
	
	for(r=n-i-2;r>=i;r--)
	a[n-i-1][r]=k++;
	
	for(t=n-i-2;t>i;t--)
	a[t][i]=k++;

	
}
for(x=0;x<6;x++){

for(y=0;y<6;y++)
{
	printf("%d   ",a[x][y]);
	
}
printf("\n");
}
}
