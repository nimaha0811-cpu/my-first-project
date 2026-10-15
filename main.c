/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
  
  float n1;
  printf("Enter first number: ");
  scanf("%f",&n1);
  
  char op;
  printf("Enter operator ( + , - , * , / ): ");
  scanf(" %c",&op);
  
  float n2;
  printf("Enter second number: ");
  scanf("%f",&n2);
  
  switch(op){
    case '+': printf("Result: %f+%f=%f",n1,n2,n1+n2);break;
    case '-': printf("Result: %f-%f=%f",n1,n2,n1-n2);break;
    case '*': printf("Result: %f*%f=%f",n1,n2,n1*n2);break;
    case '/': printf("Result: %f/%f=%f",n1,n2,n1/n2);break;
    default: printf("You entered wrong operator...");
  }
  return 0;
  
}