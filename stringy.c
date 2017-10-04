#include <stdio.h>
#include <string.h>

#include "stringy.h"

char* our_strncpy(char* dest, char* source, int n) {
  char* orig_dest = dest;

  for (; n > 0; n--) {
    *dest++ = *source++;
  }

  return orig_dest;
}

char * our_strcat( char *dest, char *source ) {
  char* orig_dest = dest;

  while (*dest) {
    dest++;
  }

  while (1) {
    char c = *source;
    if (!c) {
      *dest++ = 0;
      break;
    }

    *dest++ = c;
  }

  return orig_dest;
}

int our_strlen( char * s) {
  int len = 0;
  while (*(s++))
    len++;
  return len;
}

int our_strcmp( char *s1, char *s2 ) {
  while (*s1 || *s2) {
    if (*s1 != *s2)
      return *s1 - *s2;
    s1++;
    s2++;
  }
  return 0;
}

char * our_strchr( char *s, char c ) {
  for (; *s; s++) {
    if (*s == c) return s;
  }

  return NULL;
}

char * our_strstr( char *s1, char * s2 ) {
  while (*s1 && *s2) {
    if (*s1 == *s2) {
      char* s1_start = s1;
      char* s2_start = s2;

      do {
	s1++;
	s2++;
      } while (*s2 && *s1 == *s2);

      if (!*s2) {
	return s1_start;
      }

      s1 = s1_start;
      s2 = s2_start;
    }

    s1++;
    s2++;
  }

  return NULL;
}
