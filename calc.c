#include <stdio.h>

char buf[256];
int idx = 0;

int integer(void) {
  int number = 0;
  for(; '0' <= buf[idx] && buf[idx] <= '9'; idx++) {
    number = number * 10 + buf[idx] - '0';
  }
  return number;
}

int main(void) {
  scanf("%255s", buf);
  int number = integer();
  printf("%d\n", number);
}
