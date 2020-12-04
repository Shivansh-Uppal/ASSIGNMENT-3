#include <stdio.h>
int main(){
int week;
const char *WEEKS[]={"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
printf("enter week number(1-7): ");
scanf("%d",&week);
if(week>0 && week<8){
       printf("%s",WEEKS[week-1]);
}
return 0;
}