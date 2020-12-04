#include <stdio.h>
int main(){
int i,n;
printf("enter the number of which factors is needed\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0)
{
printf("factors of %d are %d\n",n,i);
}
}
return 0;
}