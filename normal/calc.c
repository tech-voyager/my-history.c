#include <stdio>

int main() {
  int num1, num2, oper, choice;
  float fnum1, fnum2;
  printf("1 = int, 2 = float");
  printf("What type of action? Float or Integer?: ");
  scanf("%d", &choice);
  if(choice == 1) {
    printf("+ = 1, - = 2, 3 = *, 4 = /");
    printf("Action: ");
    scanf("%d", &oper);
    printf("\n1th num ");
    scanf("%d", &num1);
    printf("\n2th num ");
    scanf("%d", &num2);
    if(oper == 1)
      printf("%d + %d = %d\n", num1, num2, num1 + num2);
    if(oper == 2)
      printf("%d - %d = %d", num1, num2, num1 - num2);
    if(oper == 3)
      printf("%d * %d = %d", num1, num2, num1 * num2);
    if(oper == 4)
      printf("%d / %d = %d", num1, num2, num1 / num2);
 } if(choice == 2) {
     printf("+ = 1, - = 2, * = 3, / = 4");
     printf("Your choice: ");
     scanf("%d", &oper);
     printf("\n1th num: ");
     scanf("%g", &fnum1);
     printf("\n2th num ");
     scanf("%g", &fnum2);
     if(oper == 1)
       printf("%g + %g = %g", fnum1, fnum2, fnum1 + fnum2);
     if(oper == 2)
       printf("%g - %g = %g", fnum1, fnum2, fnum1 + fnum2);
     if(oper == 3)
       printf("%g * %g = %g", fnum1, fnum2, fnum2 * fnum2);
     if(oper == 4)
       printf("%g * %g = %g", fnum1, fnum2, fnum1 + fnum2);

 } else {
    printf("Visit push");
 }
}
