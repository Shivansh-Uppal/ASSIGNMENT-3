#include <stdio.h>
int main(){
int i,n1,n2,hcf;
printf("enter the first number and second number of which hcf is need ");
scanf("%d %d",&n1,&n2);
for(i=1;i<=n1 && i<=n2;i++){
if(n1%i==0 && n2%i==0)
{
hcf=i;
}
}
    printf("the hcf is %d",hcf);

return 0;
}