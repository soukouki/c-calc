#include <stdio.h>

char buf[256];
int idx = 0;

int integer(void) {
  int number = 0;
  int sign = 1;
  if(buf[idx] == '-') {
    sign = -1;
    idx++;
  } else if(buf[idx] == '+') {
    idx++;
  }
  for(; '0' <= buf[idx] && buf[idx] <= '9'; idx++) {
    number = number * 10 + buf[idx] - '0';
  }
  return number * sign;
}

int mul_div(void) {
  int result = integer();
  while(buf[idx] == '*' || buf[idx] == '/') {
    if(buf[idx] == '*') {
      idx++;
      result *= integer();
    } else if(buf[idx] == '/') {
      idx++;
      result /= integer();
    }
  }
  return result;
}

int add_sub(void) {
  int result = mul_div();
  while(buf[idx] == '+' || buf[idx] == '-') {
    if(buf[idx] == '+') {
      idx++;
      result += mul_div();
    } else if(buf[idx] == '-') {
      idx++;
      result -= mul_div();
    }
  }
  return result;
}

int main(void) {
  scanf("%255s", buf);
  int result = integer();
  printf("%d\n", result);
}
