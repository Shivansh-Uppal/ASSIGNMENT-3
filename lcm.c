#include <stdio.h>
int main(){
int i,n1,n2,lcm,hcf;
printf("enter the first number and second number of which lcm is need ");
scanf("%d %d",&n1,&n2);
for(i=1;i<=n1 && i<=n2;i++){
if(n1%i==0 && n2%i==0)
{
hcf=i;
}
}
lcm=(n1*n2)/hcf;
    printf("the lcm is %d",lcm);
return 0;
}