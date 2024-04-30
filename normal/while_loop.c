#include <stdio.h>

int main() {
  int len = 10;
  int arr[len];
  int i = 0;
  while(i < len) {
    if(i >= 5)
      arr[i] = i * i;
    else arr[i] = i;
    i = i + 1;
  } i = 0;

  while(i < len) {
    printf("%d\n", arr[i]);
    i = i + 1;
  }

  return 0;
}
