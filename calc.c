#include <stdio.h>

int main(void) {
  char buf[256];
  scanf("%255s", buf);
  int number = buf[0] - '0';
  printf("%d\n", number);
}
