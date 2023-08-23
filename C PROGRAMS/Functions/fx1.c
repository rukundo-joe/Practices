#include "stdio.h"

int AgeValid(); //Function declaration

int main() {
  AgeValid(); //Function call
  return 0;
}

int AgeValid(){
  int age, result;
  printf("What's your age? \n");
  scanf("%d", &age);
  if (age > 18) {
    result = printf("You're an adult \n");
  }else{
    result = printf("You're young \n");
  }

  return result;
}
