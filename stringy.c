#include <stdio.h>
#include <string.h>

#include "stringy.h"

char* our_strncpy(char* dest, char* source) {

}

char * our_strcat( char *dest, char *source ) {
}

int our_strlen( char * s) {
  int len = 0;
  while (*(s++))
    len++;
  return len;
}

int our_strcmp( char *s1, char *s2 ) {
  while (*s1 && *s2) {
    if (*s1 != *s2)
      return *s1 - *s2;
    s1++;
    s2++;
  }
  return 0;
}

char * our_strchr( char *s, char c ) {
}

char * our_strstr( char *s1, char * s2 ) {
}

int main() {
  char s[] = "hello world";
  char s2[] = "help me";
  printf("s: %s\ns2: %s\n\n", s, s2);
  
  printf("Testing strlen(s):\n[standard]: %lu\n[mine]: %d\n\n", strlen(s), our_strlen(s));

  printf("Testing strcmp(s, s2):\n[standard]: %d\n[mine]: %d\n", strcmp(s, s2), our_strcmp(s, s2));
  return 0;
}
