#include <stdio.h>
int main(){
int total,m1,m2,m3,m4,m5;
printf("enter the marks in \nphysics\nchemistry\nbiology\nmathematics\ncomputer\n ");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=((m1+m2+m3+m4+m5)*100/500);
printf("the total percentage is %d\n",total);
if(total>=90){
    printf("GRADE A");
}
 if(total>=80){
    printf("GRADE B");
}
 if(total>=70){
    printf("GRADE C");
}
 if(total>=60){
    printf("GRADE D");
}
 if(total>=40){
    printf("GRADE E");
}
else{
    printf("GRADE F");
}
return 0;
}