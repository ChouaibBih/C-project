#include <stdio.h>

int main(){
  
  char operator;
  double num1;
  double num2;
  double result;

  printf("\nenter oprator (+ - * /): ");
  scanf("%c", &operator);

  printf("\nenter first number: ");
  scanf("%lf", &num1);

  printf("\nenter second number: ");
  scanf("%lf", &num2);

  switch(operator){
    case'+':
      result = num1 + num2;
      printf("\nresult is : %lf", result);
      break;

    case '-':
      result = num1 - num2;
      printf("\nresult is : %lf", result);
      break;

    case '*':
      result = num1 * num2;
      printf("\nresult is : %lf", result);
      break;

    case '/':
      result = num1 / num2;
      printf("\nresult is : %lf", result);
      break;

    default:
    printf("\ninvalid value!?");
  }

    

    return 0;
}