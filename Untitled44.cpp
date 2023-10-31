#include <stdio.h>
int main()
{
	int i,j;
	int a[6]={1,2,3,4,5,6};
	int b[4],c[4],d=0,e=0,l,n;
	
	for(i=0;i<6;i++){
	
	if(a[i]%2==0){
		b[d]=a[i];
		d++;
	}
	else
	c[e]=a[i];
	e++;
}
	for(l=0;l<4;l++)
	printf("b[%d]=%d",l,b[l]);
}
