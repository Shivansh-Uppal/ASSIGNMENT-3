#include <stdio.h>
int main(){
int n,q,result=0,i,rem,j;
long long fact;
printf("enter the last number till where strong number is required ");
scanf("%d",&n);
    for(i=1;i<=n;i++){
        q=i;
        result=0;
        while(q>0){
    fact=1ll;
    rem=q%10;
    for(j=1;j<=rem;j++){
        fact=fact*j;
    }
    result=result+fact;
   q/=10;
}
if(result==i){
    printf("%d\n1",i);
}
    }
return 0;
}