#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++) {
    // �?i ch? k? t? t?i v? tr� i v� v? tr� length - i - 1
    char temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
  }
}

int main() {
  char inputString[100];
  printf("Nh?p chu?i: ");
  fgets(inputString, 100, stdin);

  reverseString(inputString);

  printf("Chu?i ban �?u: %s\n", inputString);
  printf("Chu?i �?o ng�?c: %s\n", inputString);

  return 0;
}
