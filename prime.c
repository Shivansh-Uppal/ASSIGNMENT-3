#include <stdio.h>
int main(){
int i,n;
printf("enter the number you want prime factors of ");
scanf("%d",&n);
for(i=2;n>1;i++){
while(n%i==0){
    printf("%d\n",i);
    n/=i;
}
}
return 0;
}