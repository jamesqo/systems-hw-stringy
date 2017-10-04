#include <stdio.h>
#include <string.h>

#include "stringy.h"

int main() {
  char s[] = "hello world";
  char s2[] = "help me";
  char tmp_buffer[100];

  printf("s: %s\ns2: %s\n\n", s, s2);
  
  printf("Testing strlen(s):\n[standard]: %lu\n[mine]: %d\n\n", strlen(s), our_strlen(s));

  char s3[] = "ab";
  char s4[] = "abc";
  char s5[] = "abc";
  printf("s3: %s\ns4: %s\ns5: %s\n", s3, s4, s5);
  printf("Testing strcmp(s, s2):\n[standard]: %d\n[mine]: %d\n", strcmp(s, s2), our_strcmp(s, s2));
  printf("Testing strcmp(s3, s4):\n[standard]: %d\n[mine]: %d\n", strcmp(s3, s4), our_strcmp(s3, s4));
  printf("Testing strcmp(s4, s3):\n[standard]: %d\n[mine]: %d\n", strcmp(s4, s3), our_strcmp(s4, s3));
  printf("Testing strcmp(s4, s5):\n[standard]: %d\n[mine]: %d\n\n", strcmp(s4, s5), our_strcmp(s4, s5));
  
  printf("Testing strncpy(s, s2, 4):\n");

  strncpy(tmp_buffer, s, 4);
  char* strncpy_result = strncpy(s, s2, 4);
  printf("[standard]: %s\n", strncpy_result);
  strncpy(s, tmp_buffer, 4);
  
  strncpy(tmp_buffer, s, 4);
  char* our_strncpy_result = our_strncpy(s, s2, 4);
  printf("[mine]: %s\n", our_strncpy_result);
  strncpy(s, tmp_buffer, 4);

  char* strstr_result_1 = strstr("earearful", "earful");
  char* our_strstr_result_1 = our_strstr("earearful", "earful");
  printf("Testing strstr(\"earearful\", \"earful\"):\n[standard]: %p\n[mine]: %p\n\n", strstr_result_1, our_strstr_result_1);

  char* strstr_result_2 = strstr("hello world", "not inside");
  char* our_strstr_result_2 = our_strstr("hello world", "not inside");
  printf("Testing strstr(\"hello world\", \"not inside\"):\n[standard]: %p\n[mine]: %p\n\n", strstr_result_2, our_strstr_result_2);

  return 0;
}
