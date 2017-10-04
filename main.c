#include <stdio.h>
#include <string.h>

#include "stringy.h"

int main() {
  char s[] = "hello world";
  char s2[] = "help me";
  char tmp_buffer[100];

  printf("s: %s\ns2: %s\n\n", s, s2);
  
  printf("Testing strlen(s):\n[standard]: %lu\n[mine]: %d\n\n", strlen(s), our_strlen(s));

  printf("Testing strcmp(s, s2):\n[standard]: %d\n[mine]: %d\n", strcmp(s, s2), our_strcmp(s, s2));

  printf("Testing strncpy(s, s2, 4):\n");

  strncpy(tmp_buffer, s, 4);
  char* strncpy_result = strncpy(s, s2, 4);
  printf("[standard]: %s\n", strncpy_result);
  strncpy(s, tmp_buffer, 4);
  
  strncpy(tmp_buffer, s, 4);
  char* our_strncpy_result = our_strncpy(s, s2, 4);
  printf("[mine]: %s\n", our_strncpy_result);
  strncpy(s, tmp_buffer, 4);

  printf("Testing strcmp(s, s2):\n[standard]: %d\n[mine]: %d\n", strcmp(s, s2), our_strcmp(s, s2));
  return 0;
}
