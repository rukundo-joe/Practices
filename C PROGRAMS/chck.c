#include<stdio.h>

/* Declaration of structure */
struct student
{
 char name[30];
 float marks;
};

int main()
{
/* Declaration of array of structure */
 struct student s[20], temp;
 int i,j,n;

 printf("Enter n:\n");
 scanf("%d",&n);
 for(i=0;i< n;i++)
 {
  printf("Enter name and marks of student:\n");
  scanf("%s%f",s[i].name, &s[i].marks);
 }
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(s[i].marks>s[j].marks)
   {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
   }
  }
 }
 printf("Sorted records are:\n");
 for(i=0;i< n;i++)
 {
  printf("Name: %s\n", s[i].name);
  printf("Marks: %0.2f\n\n", s[i].marks);
 }
 return 0;
}
