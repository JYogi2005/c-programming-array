#include <stdio.h>
int main()
{
	int a[6]={3,2,5,4,6,1},i,j,z,t;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		if(a[j]>a[i]){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
	for(z=0;z<6;z++)
	printf("a[%d]=%d",z,a[z]);
}

