#include <stdio.h>
int main(){
int n,e,i;
long long pow=1;
printf("enter the number of which power is needed\n ");
scanf("%d",&n);
printf("enter the power needed\n");
scanf("%d",&e);
for(i=1;i<=e;i++){
    pow=pow*n;
}
printf("%d ^ %d =%lld",n,e,pow);
return 0;
}