#include <stdio.h>

int main(void) {
  char buf[256];
  scanf("%255s", buf);
  int number = 0;
  for(int i = 0; '0' <= buf[i] && buf[i] <= '9'; i++) {
    number = number * 10 + buf[i] - '0';
  }
  printf("%d\n", number);
}
