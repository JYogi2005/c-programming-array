#include <stdio.h>
int main()
{
int a[6]={1,2,3,4,5,6};
int	b[6],i,j;
for(i=0;i<6;i++)
 {
 b[i]=a[i];
}



for(j=0;j<6;j++)
printf("b[%d]=%d",j,b[j]);


}
