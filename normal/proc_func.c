#include <stdio.h>

/* procedure */
/*
=============
=============
*/
void procedure(int x) {
  if(x == 10)
    printf("%d", x);
  else printf("!!! ERROR !!!\n");
}
/* 
==============
==============
*/
/*
  procedure
*/

int func(int a, int b) {
  if(a > b)
    return 1;
  else
    return 0;
}

int main() {
  procedure(10);
  procedure(5);


  /* VAR */
  /* ======== */
  int a, b;
  int res;
  /* ======== */
  
  printf("Write something: ");
  scanf("%d", &a);
  printf("\nWrite something: ");
  scanf("%d", &b);

  res = func(a, b);
  printf("-> %d\n", res);
}
/*
The procedure as I understand it!
A procedure is a process that does NOT return a value and, accordingly, the data type “VOID”
*/
