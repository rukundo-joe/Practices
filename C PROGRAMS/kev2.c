#include <stdio.h>

int main(){

int a, b, sum;
printf("The numbers are: \n");
for(a=1; a<=10; a++){
if(a==4 || a==7){
continue;
}
printf("%d  ", a);
//sum+=a;
}
//printf("\n");
//printf("The sum is = %d", sum);
return 0;
}
