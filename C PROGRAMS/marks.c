#include <stdio.h>

int main(){

int stud, z;
float marks, sum, average;

printf("Enter the number of students : \n");
scanf("%d", &stud);
printf("\n");
printf("Enter marks for %d students\n", stud);


for(z=1; z<=stud; z++){
    scanf("%f", &marks);
    sum+=marks;
    average = sum/stud;
}
printf("\n");
printf("You've entered %d students", stud);
printf("\n");
printf("The total sum of all marks = %f", sum);
printf("\n");
printf("The average of all marks = %f", average);
printf("\n");


return 0;
}
