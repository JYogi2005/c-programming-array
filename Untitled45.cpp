#include <stdio.h>
int main()
{
	int i,j,a[5]={1,2,4,5};
	int n=3,l,t;


a[4]=3;
for(j=0;j<5;j++)
for(i=0;i<5;i++)
if(a[j]<a[i]){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}

	

	


	
	
for(l=0;l<5;l++)
	printf("a[%d]=%d",l,a[l]);
}
