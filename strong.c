#include <stdio.h>
int main(){
int n,fact=1,result=0,i,rem;
int q;
printf("enter the number to check if its strong number or not ");
scanf("%d",&n);
q=n;
while(n!=0){
    rem=n%10;
    fact=1;
    for(i=1;i<=rem;i++){
        fact=fact*i;
    }
    result=result+fact;
   n=n/10;
}
if(result==q){
    printf("its a strong number");
}
else{
    printf("its not strong");
}
return 0;
}