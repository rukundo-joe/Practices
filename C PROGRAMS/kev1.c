#include <stdio.h>
int main(){

int a, sum=0;
printf("The numbers are : ");
for(a=2; a<=25; a++){
    if(a%2==1){
    printf("%d ", a);
        sum+=a;
    }
}
printf("\n");
printf("The sum is = %d", sum);
return 0;
}
